QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../controller/controller.cc \
    ../model/agents/lib_agents.cc \
    ../model/agents/lib_cpu_agent.cc \
    ../model/agents/lib_memory_agent.cc \
    ../model/agents/lib_network_agent.cc \
    ../model/agents/lib_special_agent.cc \
    ../model/model.cc \
    ../model/agents/testbot.cc \
    ../model/utilitys/lib_start_agent.cc \
    ../model/utilitys/utils.cc \
    main.cpp \
    view.cpp

HEADERS += \
    ../controller/controller.h \
    ../model/agents/lib_agents.h \
    ../model/model.h \
    ../model/utilitys/utils.h \
    view.h

FORMS += \
    view.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../Makefile \
    ../config.conf \
    ../logs.txt

RESOURCES += \
    Resources.qrc
