# 🪄 NameGenie

[فارسی](#فارسی) · [English](#english)

<a id="فارسی"></a>
## 🇮🇷 فارسی

ابزار دسکتاپ تغییر نام گروهی فایل‌ها با C++ و Qt.

### 🚀 امکانات

- انتخاب پوشه و افزودن پیشوند، پسوند و شماره به نام فایل‌ها.
- جابه‌جایی ترتیب پردازش فایل‌ها با گزینهٔ صعودی.
- نمایش نام‌های پیشنهادی در فهرست پیش‌نمایش.

### 🛠️ ساخت و اجرا

به Qt به‌همراه یک کامپایلر C++ سازگار و ابزار `qmake` نیاز دارید. فایل `NameGenie.pro` را در Qt Creator باز کنید، کیت ساخت را انتخاب کنید و پروژه را بسازید و اجرا کنید. کد برنامه در `src/` است.

### ⚠️ احتیاط

دکمهٔ پیش‌نمایش جداست و پیش از اجرا تأیید گرفته می‌شود. مقصدهای نامعتبر یا تکراری پیش از تغییر بررسی می‌شوند و در صورت خطای میانی، برنامه برای بازگردانی نام‌های اولیه تلاش می‌کند. برای دادهٔ مهم همچنان از فایل‌ها نسخهٔ پشتیبان بگیرید.

### 💡 تجربهٔ کار

وقتی مجموعه‌ای از فایل‌ها باید با یک الگوی نام‌گذاری مرتب شوند، ابتدا پوشه را انتخاب کنید، پیشوند یا پسوند را بنویسید و ترتیب پردازش را تعیین کنید. برنامه برای هر فایل یک نام پیشنهادی با شمارهٔ متوالی می‌سازد. شماره پیش از پسوند فایل قرار می‌گیرد تا نوع فایل حفظ شود. پیش‌نمایش نام قدیم و جدید را کنار هم نشان می‌دهد.

### 🧩 اجزای اصلی

| مسیر | نقش |
| --- | --- |
| `NameGenie.pro` | پیکربندی ساخت Qt/qmake |
| `src/NameGenie.ui` | رابط پنجره |
| `src/main.cpp` | اتصال دکمه‌ها به عملیات |
| `src/FileRenamer.cpp` | ساخت نام‌های پیشنهادی و تغییر نام فایل‌ها |

> 🔎 در صورت تغییر فایل‌ها یا تنظیمات پس از پیش‌نمایش، برنامه اجرای نسخهٔ قدیمی را متوقف می‌کند.

### 👤 پدیدآورنده و حقوق نشر

© م.امین عسکری (M. Amin Askari). [GitHub](https://github.com/AminAskariX) · [وب‌سایت](https://aminaskarix.ir)

### 📜 مجوز

این پروژه تحت مجوز MIT منتشر شده است؛ متن کامل در [LICENSE](LICENSE) آمده است.

<a id="english"></a>
## 🇬🇧 English

A C++/Qt desktop utility for renaming files in a selected folder.

### 🚀 Features

- Add a prefix, suffix, and sequential number to file names.
- Reverse the order in which files are processed.
- Display proposed names in a preview list.

### 🛠️ Build and run

Install Qt, a compatible C++ compiler, and `qmake`. Open `NameGenie.pro` in Qt Creator, select a build kit, then build and run. Application sources live in `src/`.

### ⚠️ Caution

Preview and Apply are separate, and Apply requests confirmation. Invalid or duplicate destinations are checked in advance; on a mid-operation failure, the app attempts to restore original names. Keep a backup of important files.

### 💡 Workflow

Choose a folder, enter an optional prefix or suffix, and select the processing order. NameGenie builds a numbered candidate name for each file. The sequence number is inserted before the file extension, preserving the file type. Preview shows old and new names side by side.

### 🧩 Repository map

| Path | Purpose |
| --- | --- |
| `NameGenie.pro` | Qt/qmake build configuration |
| `src/NameGenie.ui` | Window layout |
| `src/main.cpp` | Button wiring |
| `src/FileRenamer.cpp` | Candidate names and file renaming |

> 🔎 Changes to files or options after preview invalidate the previous preview.

### 👤 Author and copyright

Copyright © M. Amin Askari (م.امین عسکری). [GitHub](https://github.com/AminAskariX) · [Website](https://aminaskarix.ir)

### 📜 License

This project is licensed under MIT. See [LICENSE](LICENSE) for the full terms.
