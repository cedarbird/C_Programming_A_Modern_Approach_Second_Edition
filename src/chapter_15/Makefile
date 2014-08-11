# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99

justify: justify.o word.o line.o
	gcc -o justify justify.o word.o line.o

justify.o: justify.c word.h line.h
	gcc ${OPTIONS} -c justify.c word.h line.h

word.o: word.c word.h
	gcc ${OPTIONS} -c word.c word.h

line.o: line.c line.h
	gcc ${OPTIONS} -c line.c line.h

clean:
	${RM} -fR bin

