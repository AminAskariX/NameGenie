# NameGenie.pro - Project File

QT       += core gui

TARGET = NameGenie
TEMPLATE = app

# Source Files
SOURCES += \ 
    src/main.cpp \ 
    src/FileRenamer.cpp

# Header Files
HEADERS += \ 
    src/FileRenamer.h

# UI Files
FORMS += \ 
    src/NameGenie.ui

# Resource Files
RESOURCES += \ 
    resources/icons.qrc

# Additional Configurations
CONFIG += c++11
