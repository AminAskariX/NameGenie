#include "FileRenamer.h"
#include <QDir>
#include <QFileInfo>
#include <algorithm>

FileRenamer::FileRenamer(const QString &folderPath)
    : folderPath(folderPath), ascending(true) {}

void FileRenamer::setPrefix(const QString &prefix) {
    this->prefix = prefix;
}

void FileRenamer::setSuffix(const QString &suffix) {
    this->suffix = suffix;
}

void FileRenamer::setNumbering(bool ascending) {
    this->ascending = ascending;
}

std::vector<QString> FileRenamer::getFilesInFolder() {
    QDir dir(folderPath);
    QStringList fileList = dir.entryList(QDir::Files);
    std::vector<QString> files(fileList.begin(), fileList.end());
    return files;
}

std::vector<QString> FileRenamer::previewChanges() {
    std::vector<QString> files = getFilesInFolder();
    if (!ascending) {
        std::reverse(files.begin(), files.end());
    }

    std::vector<QString> preview;
    int counter = 1;
    for (const QString &file : files) {
        QString newName = prefix + file + suffix + QString::number(counter++);
        preview.push_back(newName);
    }

    return preview;
}

void FileRenamer::applyChanges() {
    std::vector<QString> files = getFilesInFolder();
    if (!ascending) {
        std::reverse(files.begin(), files.end());
    }

    int counter = 1;
    for (const QString &file : files) {
        QString oldPath = folderPath + "/" + file;
        QString newPath = folderPath + "/" + prefix + file + suffix + QString::number(counter++);
        QFile::rename(oldPath, newPath);
    }
}
