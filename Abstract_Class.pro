QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bicycle.cpp \
    bicycle_driver.cpp \
    cycle.cpp \
    cycle_driver.cpp \
    main_driver.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    bicycle.h \
    bicycle_driver.h \
    cycle.h \
    cycle_driver.h

DISTFILES += \
    LICENSE \
    README.md
