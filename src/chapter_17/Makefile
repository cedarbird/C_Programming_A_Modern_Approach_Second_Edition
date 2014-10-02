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

