QT += core
QT -= gui

TARGET = mono_server
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    ../mono_net/server.cpp

HEADERS += \
    ../mono_net/server.h \
    ../mono_data/types.h

