#-------------------------------------------------
#
# Project created by QtCreator 2015-10-05T21:26:54
#
#-------------------------------------------------

QT       += core gui
QT       +=multimedia
QT       +=winextras

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled81
TEMPLATE = app


SOURCES += main.cpp\
        player.cpp \
    about.cpp

HEADERS  += player.h \
    about.h

FORMS    += player.ui

RESOURCES += \
    image.qrc
