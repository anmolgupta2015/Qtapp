# Constellation Qt Application

## 🚀 Project Overview

This is a **small Qt application** written in **C++20** using the **CMake build system**. The application demonstrates basic Qt functionality with a **button that updates a label** when clicked.



---


https://github.com/user-attachments/assets/5bbf6804-51ae-4e3b-a480-92ec7e5815de


## 📋 Features

- Simple Qt **GUI** with a button and label.
- **Well-structured C++20 code** with documentation.
- Uses **CMake** as the build system.
- Follows **best practices for Qt application development**.
- Includes a **recorded demo** showcasing the application.

---

## ⚙️ Dependencies

Ensure you have the following installed before building:

- **Qt 6.x** (with Qt Widgets)
- **CMake**
- **MinGW-w64 (or any GCC-based compiler)**

To install required dependencies on **Windows (MSYS2)**:

```sh
pacman -S mingw-w64-x86_64-qt6-base mingw-w64-x86_64-gcc cmake
```

---

## 🔨 Build and Run

Follow these steps to build and run the project:

### 1️⃣ Clone the Repository

```sh
git clone https://github.com/yourusername/ConstellationQtApp.git
cd ConstellationQtApp
```

### 2️⃣ Configure the Build System

```sh
cmake -B build -G "MinGW Makefiles"
```

### 3️⃣ Compile the Application

```sh
cmake --build build
```

### 4️⃣ Run the Application

```sh
./build/ConstellationQtApp
```



## 📝 Documentation

This project follows **Doxygen-style documentation** in the code.
To generate HTML documentation:

```sh
doxygen Doxyfile
```

---

## 🔗 References

- [Qt Documentation](https://doc.qt.io/qt-6/)
- [CMake Documentation](https://cmake.org/documentation/)

---

## 👨‍💻 Author

- **Anmol Gupta**

