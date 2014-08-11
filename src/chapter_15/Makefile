# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99

justify: justify.o word.o line.o
	${CC} -o justify justify.o word.o line.o

justify.o: justify.c word.h line.h
	${CC} ${OPTIONS} -c justify.c word.h line.h

word.o: word.c word.h
	${CC} ${OPTIONS} -c word.c word.h

line.o: line.c line.h
	${CC} ${OPTIONS} -c line.c line.h

projects01: justify.o word.o prj01_line.o
	${CC} -o projects01 justify.o word.o prj01_line.o

prj01_line.o: prj01_line.c line.h
	${CC} ${OPTIONS} -c prj01_line.c line.h

projects03: projects03.c quicksort.h quicksort.o
	${CC} -o projects03 projects03.c quicksort.h quicksort.o

quicksort.o: quicksort.h quicksort.c
	${CC} -c quicksort.c quicksort.h

projects04: projects04.c readline.h readline.o
	${CC} -o projects04 projects04.c readline.h readline.o

readline.o: readline.h readline.c
	${CC} -c readline.c readline.h

projects05: projects05.c stack.h stack.o
	${CC} -o projects05 projects05.c stack.h stack.o

stack.o: stack.h stack.c
	${CC} -c stack.c stack.h

clean:
	${RM} -fR *.gch *.o
