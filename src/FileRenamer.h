#ifndef FILERENAMER_H
#define FILERENAMER_H
#include <QString>
#include <QStringList>
#include <QVector>
class FileRenamer {
public:
    explicit FileRenamer(const QString &folderPath);
    void setPrefix(const QString &value);
    void setSuffix(const QString &value);
    void setNumbering(bool ascending);
    QStringList previewChanges(QString *error = nullptr) const;
    bool applyChanges(QString *error = nullptr) const;
private:
    struct Change { QString original; QString target; QString temporary; };
    QVector<Change> plan(QString *error) const;
    QString folderPath, prefix, suffix;
    bool ascending = true;
};
#endif
