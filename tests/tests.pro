include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS +=     \
	../app/functions.h \
    cleararray.h \
    calculate.h \
    check.h \
    sort.h

SOURCES +=     main.cpp \
	../app/functions.cpp

INCLUDEPATH += ../app

DISTFILES += \
    expected/expected1 \
    expected/expected2 \
    expected/expected3 \
    input/input1 \
    input/input2 \
    input/input3 \
    output/output1 \
    output/output2 \
    output/output3
