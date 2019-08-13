TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ConsolEngine/BaseApp.cpp \
    ConsolEngine/TestApp.cpp \
    ConsolEngine/main.cpp \
    ConsolEngine/figure.cpp

HEADERS += \
    ConsolEngine/BaseApp.h \
    ConsolEngine/PerformanceCounter.h \
    ConsolEngine/TestApp.h \
    ConsolEngine/figure.h
