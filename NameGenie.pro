QT += core gui widgets
CONFIG += c++11
TARGET = NameGenie
TEMPLATE = app
SOURCES += src/main.cpp \
           src/FileRenamer.cpp
HEADERS += src/FileRenamer.h
FORMS += src/NameGenie.ui
