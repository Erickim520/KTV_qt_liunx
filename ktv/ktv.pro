#-------------------------------------------------
#
# Project created by QtCreator 2015-01-08T17:29:06
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ktv
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    frame_py.cpp \
    songline.cpp \
    songlist.cpp \
    movefunction.cpp \
    data_db.cpp \
    songinfo.cpp \
    selectedsong.cpp \
    selectsongline.cpp \
    mplayer.cpp \
    songerfram.cpp \
    allchooesfram.cpp

HEADERS  += widget.h \
    frame_py.h \
    songline.h \
    songlist.h \
    movefunction.h \
    data_db.h \
    songinfo.h \
    selectedsong.h \
    selectsongline.h \
    mplayer.h \
    songerfram.h \
    allchooesfram.h

FORMS    += widget.ui \
    frame_py.ui \
    songline.ui \
    songlist.ui \
    movefunction.ui \
    selectedsong.ui \
    selectsongline.ui \
    mplayer.ui \
    songerfram.ui \
    allchooesfram.ui

RESOURCES += \
    image.qrc
