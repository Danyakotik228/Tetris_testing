TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += qt
CONFIG += c++11

SOURCES += main.c \
    functions.c

HEADERS += \
    functions.h

QMAKE_CFLAGS += -Wall -Wextra -Werror 
QMAKE_CXX_FLAGS += -std=c++11

# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
