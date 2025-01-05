#ifndef FILERENAMER_H
#define FILERENAMER_H

#include <QString>
#include <QDir>
#include <vector>

class FileRenamer {
public:
    explicit FileRenamer(const QString &folderPath);

    void setPrefix(const QString &prefix);
    void setSuffix(const QString &suffix);
    void setNumbering(bool ascending);

    std::vector<QString> previewChanges();
    void applyChanges();

private:
    QString folderPath;
    QString prefix;
    QString suffix;
    bool ascending;

    std::vector<QString> getFilesInFolder();
};

#endif // FILERENAMER_H
