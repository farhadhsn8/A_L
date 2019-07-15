#-------------------------------------------------
#
# Project created by QtCreator 2019-07-14T13:41:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = A_L
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    vectorr.cpp \
    object.cpp \
    edge.cpp \
    vertex.cpp \
    dfaedge.cpp \
    dfavertex.cpp \
    dfam.cpp \
    tedge.cpp \
    tvertex.cpp \
    turm.cpp

HEADERS += \
        mainwindow.h \
    vectorr.h \
    object.h \
    edge.h \
    vertex.h \
    dfaedge.h \
    dfavertex.h \
    dfam.h \
    tedge.h \
    tvertex.h \
    turm.h

FORMS += \
        mainwindow.ui
