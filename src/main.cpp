#include <QApplication>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <memory>
#include "FileRenamer.h"
#include "ui_NameGenie.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow window;
    Ui::MainWindow ui;
    ui.setupUi(&window);
    std::unique_ptr<FileRenamer> renamer;
    QStringList preview;
    QObject::connect(ui.selectFolderButton, &QPushButton::clicked, [&]() {
        const QString path = QFileDialog::getExistingDirectory(&window, "انتخاب پوشه");
        if (!path.isEmpty()) {
            renamer.reset(new FileRenamer(path));
            preview.clear();
            ui.previewList->clear();
            ui.selectFolderButton->setText(path);
        }
    });
    auto configure = [&]() {
        renamer->setPrefix(ui.prefixInput->text());
        renamer->setSuffix(ui.suffixInput->text());
        renamer->setNumbering(ui.ascendingCheckbox->isChecked());
    };
    QObject::connect(ui.previewButton, &QPushButton::clicked, [&]() {
        if (!renamer) { QMessageBox::information(&window, "NameGenie", "ابتدا پوشه را انتخاب کنید."); return; }
        configure();
        QString error;
        preview = renamer->previewChanges(&error);
        ui.previewList->clear();
        ui.previewList->addItems(preview);
        if (!error.isEmpty()) QMessageBox::warning(&window, "NameGenie", error);
    });
    QObject::connect(ui.startRenamingButton, &QPushButton::clicked, [&]() {
        if (!renamer || preview.isEmpty()) { QMessageBox::information(&window, "NameGenie", "ابتدا پیش‌نمایش را ببینید."); return; }
        configure();
        QString error;
        if (renamer->previewChanges(&error) != preview) {
            preview.clear();
            QMessageBox::warning(&window, "NameGenie", error.isEmpty() ? "فایل‌ها یا تنظیمات تغییر کرده‌اند؛ پیش‌نمایش را تازه کنید." : error);
            return;
        }
        if (QMessageBox::question(&window, "تأیید تغییر نام", "نام فایل‌های نمایش‌داده‌شده تغییر کند؟") != QMessageBox::Yes) return;
        if (!renamer->applyChanges(&error)) QMessageBox::warning(&window, "NameGenie", error);
        else QMessageBox::information(&window, "NameGenie", "تغییر نام انجام شد.");
        preview.clear();
        ui.previewList->clear();
    });
    window.show();
    return app.exec();
}
