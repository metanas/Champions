#-------------------------------------------------
#
# Project created by QtCreator 2017-06-22T16:25:31
#
#-------------------------------------------------

QT       += core gui
QT       += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Champions
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    addwin.cpp \
    addequipe.cpp

HEADERS  += mainwindow.h \
    addwin.h \
    addequipe.h

FORMS    += mainwindow.ui \
    addwin.ui \
    addequipe.ui
