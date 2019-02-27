QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = snake
TEMPLATE = app


SOURCES += main.cpp\
        snakewidget.cpp \
    gamewidget.cpp

HEADERS  += snakewidget.h \
    gamewidget.h

RESOURCES += \
    image.qrc
