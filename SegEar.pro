#-------------------------------------------------
#
# Project created by QtCreator 2015-03-01T18:43:39
#
#-------------------------------------------------

QT       += core gui

TARGET = SegEar
TEMPLATE = app


SOURCES += main.cpp\
        segearwindow.cpp

HEADERS  += segearwindow.h

FORMS    += segearwindow.ui

QT_CONFIG -= no-pkg-config
CONFIG += link_pkgconfig
PKGCONFIG += opencv
