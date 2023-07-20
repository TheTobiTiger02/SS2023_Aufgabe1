TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        athlete.cpp \
        main.cpp \
        mysports.cpp \
        runner.cpp \
        swimmer.cpp \
        trainer.cpp

HEADERS += \
    athlete.h \
    mysports.h \
    runner.h \
    swimmer.h \
    trainer.h
