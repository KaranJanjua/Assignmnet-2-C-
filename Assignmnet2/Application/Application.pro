#-------------------------------------------------
#
# Project created by QtCreator 2019-10-22T16:46:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Application
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
    abstractassetregister.cpp \
    registeredentity.cpp \
    assetregister.cpp \
    mockassetregister.cpp \
    abstractentityfactory.cpp \
    assettype.cpp \
    asset.cpp \
    userpropertydefinition.cpp \
    userproperty.cpp \
    userpropertyvalidator.cpp \
    custodian.cpp \
    commonentityfactory.cpp

HEADERS += \
        mainwindow.h \
    abstractassetregister.h \
    registeredentity.h \
    assetregister.h \
    mockassetregister.h \
    abstractentityfactory.h \
    assettype.h \
    asset.h \
    userpropertydefinition.h \
    userproperty.h \
    userpropertyvalidator.h \
    custodian.h \
    commonentityfactory.h

FORMS += \
        mainwindow.ui
