# NameGenie

[فارسی](#فارسی) · [English](#english)

<a id="فارسی"></a>
## فارسی

ابزار دسکتاپ تغییر نام گروهی فایل‌ها با C++ و Qt.

### امکانات

- انتخاب پوشه و افزودن پیشوند، پسوند و شماره به نام فایل‌ها.
- جابه‌جایی ترتیب پردازش فایل‌ها با گزینهٔ صعودی.
- نمایش نام‌های پیشنهادی در فهرست پیش‌نمایش.

### ساخت و اجرا

به Qt به‌همراه یک کامپایلر C++ سازگار و ابزار `qmake` نیاز دارید. فایل `NameGenie.pro` را در Qt Creator باز کنید، کیت ساخت را انتخاب کنید و پروژه را بسازید و اجرا کنید. کد برنامه در `src/` است.

### احتیاط

با زدن دکمهٔ شروع، برنامه پس از نمایش پیش‌نمایش بلافاصله تغییر نام را اجرا می‌کند؛ مرحلهٔ تأیید جداگانه ندارد. ابتدا روی نسخه‌ای پشتیبان از فایل‌ها آزمایش کنید. نتیجهٔ عملیات `QFile::rename` نیز در کد بررسی نمی‌شود.

### پدیدآورنده و حقوق نشر

© 2025 م.امین عسکری (M. Amin Askari). [GitHub](https://github.com/AminAskariX) · [وب‌سایت](https://aminaskarix.ir)

### مجوز

این پروژه تحت مجوز MIT منتشر شده است؛ متن کامل در [LICENSE](LICENSE) آمده است. عبارت «تمام حقوق محفوظ است» جایگزین شرایط این مجوز نمی‌شود.

<a id="english"></a>
## English

A C++/Qt desktop utility for renaming files in a selected folder.

### Features

- Add a prefix, suffix, and sequential number to file names.
- Reverse the order in which files are processed.
- Display proposed names in a preview list.

### Build and run

Install Qt, a compatible C++ compiler, and `qmake`. Open `NameGenie.pro` in Qt Creator, select a build kit, then build and run. Application sources live in `src/`.

### Caution

The Start button applies changes immediately after filling the preview list; there is no separate confirmation step. Try it on copies of files first. The code does not check the return value of `QFile::rename`.

### Author and copyright

Copyright © 2025 M. Amin Askari (م.امین عسکری). [GitHub](https://github.com/AminAskariX) · [Website](https://aminaskarix.ir)

### License

This project is licensed under MIT. See [LICENSE](LICENSE) for the full terms.
