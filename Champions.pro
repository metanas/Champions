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
    addequipe.cpp \
    addplayer.cpp \
    modequipe.cpp \
    loginwind.cpp \
    affplayer.cpp \
    affequipe.cpp \
    modplayer.cpp \
    suppequipe.cpp \
    suppplayer.cpp

HEADERS  += mainwindow.h \
    addwin.h \
    addequipe.h \
    addplayer.h \
    modequipe.h \
    loginwind.h \
    affplayer.h \
    affequipe.h \
    modplayer.h \
    suppequipe.h \
    suppplayer.h

FORMS    += mainwindow.ui \
    addwin.ui \
    addequipe.ui \
    addplayer.ui \
    modequipe.ui \
    loginwind.ui \
    affplayer.ui \
    affequipe.ui \
    modplayer.ui \
    suppequipe.ui \
    suppplayer.ui

DISTFILES += \
    ../../Downloads/qqqq.jpg
