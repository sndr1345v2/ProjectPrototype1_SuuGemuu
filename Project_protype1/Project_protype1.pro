QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle
QT += widgets
QT += core#these are to make sure I can use Qt libraries
QT += sql

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        cuenta.cpp \
        inicio_dialog.cpp \
        libro.cpp \
        main.cpp \
        menu_dialog.cpp \
        principal.cpp \
        registro_dialog.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    inicio_dialog.ui \
    menu_dialog.ui \
    registro_dialog.ui

HEADERS += \
    cuenta.h \
    inicio_dialog.h \
    libro.h \
    menu_dialog.h \
    principal.h \
    registro_dialog.h
