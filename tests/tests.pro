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
<<<<<<< HEAD
    calculate.h \
    check.h
=======
    calculate.h
>>>>>>> cdc9855559533051b4fb370810864d4ba6cb9b1e

SOURCES +=     main.cpp \
	../app/functions.c

INCLUDEPATH += ../app
