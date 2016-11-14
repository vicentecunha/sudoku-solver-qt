#-------------------------------------------------
#
# Project created by QtCreator 2016-11-13T15:10:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sudoku-solver
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sudokufield.cpp

HEADERS  += mainwindow.h \
    sudokufield.h

FORMS    += mainwindow.ui
CONFIG   += c++11
