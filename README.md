# NameGenie - Batch File Renamer

## Description ✨
**NameGenie** is a Windows-based graphical application built using C++ and the Qt framework. This tool allows users to batch rename files in a selected folder. With its user-friendly interface, users can add prefixes, suffixes, and organize files with ascending or descending numbering. 

---

### Key Features 🚀
- **Batch Renaming:** Rename all files in a folder in one go.
- **Custom Prefix and Suffix:** Add custom strings to the beginning or end of filenames.
- **Numbering Options:** Organize files with ascending or descending numbering.
- **Preview Changes:** View a live preview of file name changes before applying them.
- **Simple UI:** Easy-to-use interface designed for efficiency.

---

### How It Works 🛠️
1. **Select a Folder:** Use the "Select Folder" button to choose the folder containing the files to rename.
2. **Set Preferences:** Enter a prefix, suffix, and choose ascending or descending numbering.
3. **Preview Changes:** Review the list of proposed changes in the preview section.
4. **Apply Changes:** Click "Start Renaming" to rename the files.

---

### Technologies Used 💻
- **C++**
- **Qt Framework** for GUI development

---

### Installation 📥
1. Download the project from the [GitHub Repository](https://github.com/aminaskarix/NameGenie).
2. Install Qt and set up the development environment.
3. Build and run the project using `qmake` or Qt Creator.

---

### How to Compile and Run on Windows 🖥️
To compile and execute the **NameGenie** project on a Windows system, follow these steps:

#### Prerequisites
1. **Install Qt Framework:**
   - Download and install the latest version of the [Qt framework](https://www.qt.io/download).
   - During installation, make sure to select the compiler (e.g., MinGW or MSVC).

2. **Set Up a C++ Compiler:**
   - Ensure that a supported C++ compiler (e.g., MinGW or Microsoft Visual C++) is installed on your system.

#### Steps
1. **Clone the Repository:**
   ```bash
   git clone https://github.com/aminaskarix/NameGenie.git
   cd NameGenie
   ```

2. **Open the Project in Qt Creator:**
   - Launch Qt Creator.
   - Click on `File > Open File or Project` and navigate to the `NameGenie.pro` file in the project directory.

3. **Configure the Project:**
   - Select a kit (e.g., MinGW or MSVC) for building the project.
   - Click `Configure Project`.

4. **Build the Project:**
   - In Qt Creator, click the green "Run" button or press `Ctrl+R` to compile and execute the project.

5. **Run the Application:**
   - The application window for **NameGenie** will open. You can now use the interface to batch rename files.

#### Alternative (Using Command Line)
If you prefer to build the project manually using the command line:

1. **Generate Makefiles:**
   ```bash
   qmake NameGenie.pro
   ```

2. **Build the Project:**
   ```bash
   mingw32-make
   ```

3. **Run the Executable:**
   ```bash
   ./NameGenie.exe
   ```

---

### Developer Information 👨‍💻
- **Developer:** M.Amin Askari
- **Website:** [aminaskarix.ir](http://aminaskarix.ir)
- **Support Sites:** [microservice.ir](http://microservice.ir), [metacortex.ir](http://metacortex.ir)

---

### Contribution 🤝
We welcome developers to contribute to this project. Feel free to fork the repository and submit pull requests.

---

# NameGenie - تغییر نام دسته‌ای فایل‌ها

## توضیحات ✨
**NameGenie** یک ابزار گرافیکی ساده و کاربردی برای ویندوز است که با استفاده از زبان برنامه‌نویسی C++ و فریم‌ورک Qt توسعه یافته است. این ابزار به شما امکان می‌دهد تا فایل‌های موجود در یک پوشه را به صورت دسته‌ای تغییر نام دهید. کاربران می‌توانند پیشوند، پسوند اضافه کنند و فایل‌ها را با شماره‌گذاری صعودی یا نزولی مرتب کنند.

---

### ویژگی‌های کلیدی 🚀
- **تغییر نام دسته‌ای:** تمام فایل‌های موجود در یک پوشه را یکجا تغییر نام دهید.
- **پیشوند و پسوند سفارشی:** افزودن متن دلخواه به ابتداء یا انتهای نام فایل‌ها.
- **شماره‌گذاری:** مرتب‌سازی فایل‌ها با شماره‌های صعودی یا نزولی.
- **پیش‌نمایش تغییرات:** مشاهده تغییرات نام فایل‌ها قبل از اعمال آن‌ها.
- **رابط کاربری ساده:** طراحی شده برای استفاده آسان و سریع.

---

### نحوه استفاده 🛠️
1. **انتخاب پوشه:** از دکمه "انتخاب پوشه" برای انتخاب پوشه موردنظر استفاده کنید.
2. **تنظیمات:** پیشوند، پسوند وارد کنید و حالت شماره‌گذاری را انتخاب کنید.
3. **پیش‌نمایش:** تغییرات نام فایل‌ها را در بخش پیش‌نمایش مشاهده کنید.
4. **اعمال تغییرات:** با کلیک روی دکمه "تغییر نام فایل‌ها" تغییرات را اعمال کنید.

---

### تکنولوژی‌های استفاده‌شده 💻
- **C++**
- **Qt Framework** برای توسعه رابط کاربری

---

### نصب 📥
1. پروژه را از [ریپازیتوری گیت‌هاب](https://github.com/aminaskarix/NameGenie) دانلود کنید.
2. Qt را نصب کرده و محیط توسعه را آماده کنید.
3. پروژه را با استفاده از `qmake` یا Qt Creator بسازید و اجرا کنید.

---

### نحوه کامپایل و اجرای پروژه در ویندوز 🖥️
برای کامپایل و اجرای پروژه **NameGenie** در سیستم‌عامل ویندوز، مراحل زیر را دنبال کنید:

#### پیش‌نیازها
1. **نصب فریم‌ورک Qt:**
   - آخرین نسخه [Qt framework](https://www.qt.io/download) را دانلود و نصب کنید.
   - هنگام نصب، مطمئن شوید که کامپایلر (مثل MinGW یا MSVC) انتخاب شده باشد.

2. **راه‌اندازی کامپایلر C++:**
   - از نصب بودن یک کامپایلر پشتیبانی‌شده (مثل MinGW یا Microsoft Visual C++) اطمینان حاصل کنید.

#### مراحل اجرا
1. **کلون کردن ریپازیتوری:**
   ```bash
   git clone https://github.com/aminaskarix/NameGenie.git
   cd NameGenie
   ```

2. **باز کردن پروژه در Qt Creator:**
   - Qt Creator را باز کنید.
   - از منوی `File > Open File or Project` فایل `NameGenie.pro` را در پوشه پروژه انتخاب کنید.

3. **پیکربندی پروژه:**
   - یک کیت (مثل MinGW یا MSVC) برای ساخت پروژه انتخاب کنید.
   - روی `Configure Project` کلیک کنید.

4. **ساخت پروژه:**
   - در Qt Creator روی دکمه سبز "Run" کلیک کنید یا `Ctrl+R` را فشار دهید تا پروژه کامپایل و اجرا شود.

5. **اجرای برنامه:**
   - پنجره برنامه **NameGenie** باز می‌شود و می‌توانید از رابط کاربری برای تغییر نام فایل‌ها استفاده کنید.

#### روش جایگزین (استفاده از خط فرمان)
اگر ترجیح می‌دهید پروژه را به صورت دستی با خط فرمان بسازید:

1. **ایجاد فایل‌های Make:**
   ```bash
   qmake NameGenie.pro
   ```

2. **ساخت پروژه:**
   ```bash
   mingw32-make
   ```

3. **اجرای فایل اجرایی:**
   ```bash
   ./NameGenie.exe
   ```

---

### اطلاعات توسعه‌دهنده 👨‍💻
- **توسعه‌دهنده:** م.امین عسکری
- **وب‌سایت:** [aminaskarix.ir](http://aminaskarix.ir)
- **سایت‌های پشتیبان:** [microservice.ir](http://microservice.ir)، [metacortex.ir](http://metacortex.ir)

---

### همکاری در توسعه 🤝
از علاقمندان دعوت میکنم در توسعه این پروژه با من همکاری کنند، یا برای توسعه سایر نرم افزارها با من تماس بگیرید!

