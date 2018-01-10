CC=gcc
CFLAGS=-g
CFILES=main.c euclid.c 
OBJECTS=main.o euclid.o 
BIN=euclid
RM=rm -f

all:  ${OBJECTS} ${CFILES}
	${CC} -g -w -o ${BIN} ${OBJECTS} ${LIBS}

clean: 
	${RM} ${BIN} ${OBJECTS}
