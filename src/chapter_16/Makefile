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

exercises05: exercises05.c
	${CC} ${OPTIONS} -o exercises05 exercises05.c

exercises06: exercises06.c
	${CC} ${OPTIONS} -o exercises06 exercises06.c

exercises07: exercises07.c
	${CC} ${OPTIONS} -o exercises06 exercises06.c

clean:
	${RM} -fR *.gch *.o
