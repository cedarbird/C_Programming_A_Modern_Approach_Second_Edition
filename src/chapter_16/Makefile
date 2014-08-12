# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99

inventory: inventory.c readline.h readline.o
	${CC} ${OPTIONS} -o inventory inventory.c readline.h readline.o

readline.o: readline.h readline.c
	${CC} ${OPTIONS} -c readline.h readline.c

clean:
	${RM} -fR *.gch *.o
