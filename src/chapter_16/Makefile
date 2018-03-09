# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -std=c99

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

projects01: projects01.c
	${CC} ${OPTIONS} -o projects01 projects01.c

projects02: projects02.c readline.h readline.o
	${CC} ${OPTIONS} -g -O0 -o projects02 projects02.c readline.h readline.o

projects03: projects03.c readline.h readline.o
	${CC} ${OPTIONS} -o projects03 projects03.c readline.h readline.o

projects04: projects04.c readline.h readline.o
	${CC} ${OPTIONS} -o projects04 projects04.c readline.h readline.o

projects05: projects05.c
	${CC} ${OPTIONS} -o projects05 projects05.c

projects06: projects06.c
	${CC} ${OPTIONS} -o projects06 projects06.c


