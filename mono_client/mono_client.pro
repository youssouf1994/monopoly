#-------------------------------------------------
#
# Project created by QtCreator 2018-06-03T23:19:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mono_client
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../mono_net/client.cpp

HEADERS  += mainwindow.h \
    ../mono_net/client.h \
    ../mono_data/types.h

FORMS    += mainwindow.ui
