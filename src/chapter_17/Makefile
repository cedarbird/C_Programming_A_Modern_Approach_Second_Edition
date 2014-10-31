# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99

remind2: remind2.c
	${CC} ${OPTIONS} -o remind2 remind2.c

inventory2: inventory2.c readline.h readline.o
	${CC} ${OPTIONS} -o inventory2 inventory2.c readline.h readline.o

readline.o: readline.h readline.c
	${CC} ${OPTIONS} -c readline.h readline.c

projects01: readline.h projects01.c readline.o
	${CC} ${OPTIONS} -o projects01 projects01.c readline.h readline.o

projects02: readline.h projects02.c readline.o
	${CC} ${OPTIONS} -o projects02 projects02.c readline.h readline.o

projects03: readline.h projects03.c readline.o
	${CC} ${OPTIONS} -o projects03 projects03.c readline.h readline.o

projects04: projects04.c word.h line.h word.o line.o
	${CC} ${OPTIONS} -g -o projects04 projects04.c word.h line.h word.o line.o

word.o: word.c word.h
	${CC} ${OPTIONS} -c word.c word.h

line.o: line.c line.h
	${CC} ${OPTIONS} -g -c line.c line.h

