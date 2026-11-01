#include "FileRenamer.h"
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QSet>
#include <QUuid>
#include <algorithm>

FileRenamer::FileRenamer(const QString &path) : folderPath(path) {}
void FileRenamer::setPrefix(const QString &value) { prefix = value; }
void FileRenamer::setSuffix(const QString &value) { suffix = value; }
void FileRenamer::setNumbering(bool value) { ascending = value; }

QVector<FileRenamer::Change> FileRenamer::plan(QString *error) const {
    QDir dir(folderPath);
    if (!dir.exists() || !QFileInfo(folderPath).isWritable()) {
        if (error) *error = QStringLiteral("پوشه در دسترس یا قابل نوشتن نیست.");
        return {};
    }
    QStringList names = dir.entryList(QDir::Files | QDir::NoSymLinks, QDir::Name);
    if (!ascending) std::reverse(names.begin(), names.end());
    if (names.isEmpty()) {
        if (error) *error = QStringLiteral("فایلی برای تغییر نام پیدا نشد.");
        return {};
    }
    QVector<Change> changes;
    QSet<QString> targets, sources;
    for (const auto &name : names) sources.insert(name.toCaseFolded());
    for (int i = 0; i < names.size(); ++i) {
        const QString name = names.at(i);
        const QString extension = QFileInfo(name).suffix();
        const QString stem = extension.isEmpty() ? name : name.left(name.size() - extension.size() - 1);
        const QString target = prefix + stem + suffix + QString::number(i + 1) +
            (extension.isEmpty() ? QString() : QStringLiteral(".") + extension);
        const QString key = target.toCaseFolded();
        if (target.isEmpty() || target == "." || target == ".." ||
            target.contains('/') || target.contains('\\') || target.contains(':') ||
            target.contains('*') || target.contains('?') || target.contains('"') ||
            target.contains('<') || target.contains('>') || target.contains('|') ||
            target.endsWith(' ') || target.endsWith('.') ||
            targets.contains(key) || (dir.exists(target) && !sources.contains(key))) {
            if (error) *error = QStringLiteral("نام مقصد نامعتبر یا تکراری است: %1").arg(target);
            return {};
        }
        targets.insert(key);
        changes.append({name, target, QString()});
    }
    return changes;
}

QStringList FileRenamer::previewChanges(QString *error) const {
    QStringList lines;
    for (const auto &change : plan(error))
        lines << change.original + QStringLiteral("  →  ") + change.target;
    return lines;
}

bool FileRenamer::applyChanges(QString *error) const {
    auto changes = plan(error);
    if (changes.isEmpty()) return false;
    QDir dir(folderPath);
    int staged = 0, completed = 0;
    for (auto &change : changes) {
        do {
            change.temporary = QStringLiteral(".namegenie-%1.tmp").arg(QUuid::createUuid().toString(QUuid::WithoutBraces));
        } while (dir.exists(change.temporary));
        if (!QFile::rename(dir.filePath(change.original), dir.filePath(change.temporary))) goto rollback;
        ++staged;
    }
    for (auto &change : changes) {
        if (!QFile::rename(dir.filePath(change.temporary), dir.filePath(change.target))) goto rollback;
        ++completed;
    }
    return true;
rollback:
    bool restored = true;
    for (int i = completed - 1; i >= 0; --i)
        restored = QFile::rename(dir.filePath(changes[i].target), dir.filePath(changes[i].temporary)) && restored;
    for (int i = staged - 1; i >= 0; --i)
        restored = QFile::rename(dir.filePath(changes[i].temporary), dir.filePath(changes[i].original)) && restored;
    if (error) *error = restored ? QStringLiteral("تغییر نام ناموفق بود و فایل‌ها بازگردانده شدند.")
                           : QStringLiteral("بازگردانی کامل نشد؛ فایل‌های پوشه را بررسی کنید.");
    return false;
}
