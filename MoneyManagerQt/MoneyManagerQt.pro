QT       += core gui
QT += sql

# LIBS += -L"/usr/local/mysql-connector-c++-9.2.0/lib64" -lmysqlcppconn
# INCLUDEPATH += "/usr/local/mysql-connector-c++-9.2.0/include"
# DEPENDPATH += "/usr/local/mysql-connector-c++-9.2.0/include"

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addprofitinfo.cpp \
    editprofitinfo.cpp \
    fullreportwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    showhistorywindow.cpp

HEADERS += \
    addprofitinfo.h \
    editprofitinfo.h \
    fullreportwindow.h \
    mainwindow.h \
    showhistorywindow.h

FORMS += \
    addprofitinfo.ui \
    editprofitinfo.ui \
    fullreportwindow.ui \
    mainwindow.ui \
    showhistorywindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
