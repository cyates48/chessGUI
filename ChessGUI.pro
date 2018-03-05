#-------------------------------------------------
#
# Project created by QtCreator 2016-04-18T16:36:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChessGUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pawn.cpp

HEADERS  += mainwindow.h \
    pawn.h

FORMS    += mainwindow.ui

RESOURCES += \
    images_files.qrc
