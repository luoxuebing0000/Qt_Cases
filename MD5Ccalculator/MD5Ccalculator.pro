QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MD5Ccalculator
TEMPLATE = app


SOURCES += main.cpp\
        calculator.cpp

HEADERS  += calculator.h

FORMS    += calculator.ui
RC_FILE += icon.rc
