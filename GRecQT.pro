QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    filmenu.cpp \
    form_client.cpp \
    main.cpp \
    mainwindow.cpp \
    managemenu.cpp \
    recordmenu.cpp \
    repmenu.cpp \
    specfymenu.cpp \
    startmenu.cpp \
    tunnelmenu.cpp \
    usermenu.cpp

HEADERS += \
    filmenu.h \
    form_client.h \
    mainwindow.h \
    managemenu.h \
    recordmenu.h \
    repmenu.h \
    specfymenu.h \
    startmenu.h \
    tunnelmenu.h \
    usermenu.h \
    widget_headers.h

FORMS += \
    filmenu.ui \
    form_client.ui \
    mainwindow.ui \
    managemenu.ui \
    recordmenu.ui \
    repmenu.ui \
    specfymenu.ui \
    startmenu.ui \
    tunnelmenu.ui \
    usermenu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc
