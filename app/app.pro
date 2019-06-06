TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    functions.c

HEADERS += \
    functions.h

<<<<<<< HEAD
QMAKE_CFLAGS += -Wall -Wextra -Werror
=======
QMAKE_CFLAGS += -Wall -Wextra -Werror 
>>>>>>> cdc9855559533051b4fb370810864d4ba6cb9b1e

# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
