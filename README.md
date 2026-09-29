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

با زدن دکمهٔ شروع، برنامه پس از نمایش پیش‌نمایش بلافاصله تغییر نام را اجرا می‌کند؛ مرحلهٔ تأیید جداگانه ندارد. ابتدا روی نسخه‌ای پشتیبان از فایل‌ها آزمایش کنید. نتیجهٔ عملیات `QFile::rename` نیز در کد بررسی نمی‌شود.

### 💡 تجربهٔ کار

وقتی مجموعه‌ای از فایل‌ها باید با یک الگوی نام‌گذاری مرتب شوند، ابتدا پوشه را انتخاب کنید، پیشوند یا پسوند را بنویسید و ترتیب پردازش را تعیین کنید. برنامه برای هر فایل یک نام پیشنهادی با شمارهٔ متوالی می‌سازد. در پیاده‌سازی فعلی شماره بعد از نام اصلی و پسوندِ واردشده می‌آید؛ بنابراین پیش از استفاده روی عکس‌ها یا اسناد اصلی، نتیجه را روی کپی بررسی کنید.

### 🧩 اجزای اصلی

| مسیر | نقش |
| --- | --- |
| `NameGenie.pro` | پیکربندی ساخت Qt/qmake |
| `src/NameGenie.ui` | رابط پنجره |
| `src/main.cpp` | اتصال دکمه‌ها به عملیات |
| `src/FileRenamer.cpp` | ساخت نام‌های پیشنهادی و تغییر نام فایل‌ها |

> 🔎 پیش‌نمایش در همین نسخه با اجرای عملیات همراه است؛ آن را مرحلهٔ تأیید مستقل فرض نکنید.

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

The Start button applies changes immediately after filling the preview list; there is no separate confirmation step. Try it on copies of files first. The code does not check the return value of `QFile::rename`.

### 💡 Workflow

Choose a folder, enter an optional prefix or suffix, and select the processing order. NameGenie builds a numbered candidate name for each file. The current implementation appends the number after the original file name and the entered suffix; inspect its output on copied files before using it on originals.

### 🧩 Repository map

| Path | Purpose |
| --- | --- |
| `NameGenie.pro` | Qt/qmake build configuration |
| `src/NameGenie.ui` | Window layout |
| `src/main.cpp` | Button wiring |
| `src/FileRenamer.cpp` | Candidate names and file renaming |

> 🔎 Preview and application happen on the same button press in this version.

### 👤 Author and copyright

Copyright © M. Amin Askari (م.امین عسکری). [GitHub](https://github.com/AminAskariX) · [Website](https://aminaskarix.ir)

### 📜 License

This project is licensed under MIT. See [LICENSE](LICENSE) for the full terms.
