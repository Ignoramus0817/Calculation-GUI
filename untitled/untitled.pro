#-------------------------------------------------
#
# Project created by QtCreator 2018-04-14T16:27:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CalGUI
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
        calgui.cpp \
    history.cpp \
    savesuccess.cpp

HEADERS += \
        calgui.h \
    history.h \
    savesuccess.h

FORMS += \
        calgui.ui \
    history.ui \
    savesuccess.ui

DISTFILES +=

CONFIG += console

LIBS +=-L$$quote(D:\zhu\Software Engineering\2018-SE-Course\Calculator GUI\CalGUI\untitled\Core15\x64\Release) -lCore15
LIBS +=-L$$quote(D:\zhu\Software Engineering\2018-SE-Course\Calculator GUI\CalGUI\untitled\core8\core-debugx64\lib) -lArithmeticCore
LIBS +=-L$$quote(D:\zhu\Software Engineering\2018-SE-Course\Calculator GUI\CalGUI\untitled\core4) -lCORE_DLL
LIBS +=-L$$quote(D:\zhu\Software Engineering\2018-SE-Course\Calculator GUI\CalGUI\untitled\core7\release x64) -l7_ArithmeticDll


