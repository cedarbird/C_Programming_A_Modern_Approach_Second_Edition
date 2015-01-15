# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99

justify: justify.o word.o line.o
	${CC} ${OPTIONS} -o justify justify.o word.o line.o

justify.o: justify.c word.h line.h
	${CC} ${OPTIONS} -c justify.c word.h line.h

word.o: word.c word.h
	${CC} ${OPTIONS} -c word.c word.h

line.o: line.c line.h
	${CC} ${OPTIONS} -c line.c line.h

exercises04: exercises04.c exercises04.h
	${CC} ${OPTIONS} -DDEBUG -o exercises04 exercises04.c exercises04.h

projects01: justify.o word.o prj01_line.o
	${CC} ${OPTIONS} -o projects01 justify.o word.o prj01_line.o

prj01_line.o: prj01_line.c line.h
	${CC} ${OPTIONS} -c prj01_line.c line.h

projects02: projects02.o prj02_word.o line.o
	${CC} ${OPTIONS} -o projects02 projects02.o prj02_word.o line.o

projects02.o: projects02.c word.h line.h
	${CC} ${OPTIONS} -c projects02.c word.h line.h

prj02_word.o: prj02_word.c word.h
	${CC} ${OPTIONS} -c prj02_word.c word.h

projects03: projects03.c quicksort.h quicksort.o
	${CC} ${OPTIONS} -o projects03 projects03.c quicksort.h quicksort.o

quicksort.o: quicksort.h quicksort.c
	${CC} ${OPTIONS} -c quicksort.c quicksort.h

projects04: projects04.c readline.h readline.o
	${CC} ${OPTIONS} -o projects04 projects04.c readline.h readline.o

readline.o: readline.h readline.c
	${CC} ${OPTIONS} -c readline.c readline.h

projects05: projects05.c stack.h stack.o
	${CC} ${OPTIONS} -o projects05 projects05.c stack.h stack.o

stack.o: stack.h stack.c
	${CC} ${OPTIONS} -c stack.c stack.h
