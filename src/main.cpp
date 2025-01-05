#include <QApplication>
#include <QMainWindow>
#include <QFileDialog>
#include <QListWidget>
#include "FileRenamer.h"
#include "ui_NameGenie.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QMainWindow mainWindow;
    Ui::MainWindow ui;
    ui.setupUi(&mainWindow);

    FileRenamer *renamer = nullptr;

    // انتخاب پوشه
    QObject::connect(ui.selectFolderButton, &QPushButton::clicked, [&]() {
        QString folderPath = QFileDialog::getExistingDirectory(&mainWindow, "انتخاب پوشه");
        if (!folderPath.isEmpty()) {
            renamer = new FileRenamer(folderPath);
        }
    });

    // پیش‌نمایش تغییرات
    QObject::connect(ui.startRenamingButton, &QPushButton::clicked, [&]() {
        if (renamer) {
            renamer->setPrefix(ui.prefixInput->text());
            renamer->setSuffix(ui.suffixInput->text());
            renamer->setNumbering(ui.ascendingCheckbox->isChecked());

            std::vector<QString> preview = renamer->previewChanges();
            ui.previewList->clear();
            for (const QString &file : preview) {
                ui.previewList->addItem(file);
            }

            renamer->applyChanges();
        }
    });

    mainWindow.show();
    return app.exec();
}
