#-------------------------------------------------
#
# Project created by QtCreator 2013-12-23T18:15:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KBS
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    mainwindow.cpp

HEADERS  += login.h \
    mainwindow.h

FORMS    += login.ui \
    mainwindow.ui

OTHER_FILES += \
    images/logo_96.png

RESOURCES  =  images/res.qrc
