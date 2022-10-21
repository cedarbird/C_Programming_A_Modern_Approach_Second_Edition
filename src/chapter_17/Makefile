# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O0 -g -Wall -W -pedantic -std=c99

all: init remind2 inventory2 projects01 projects02 projects03 projects04

init:
	${MKDIR} -p bin

remind2: samples/remind2.c
	${CC} ${OPTIONS} -o bin/remind2 samples/remind2.c

inventory2: samples/inventory2.c common/readline.h readline.o
	${CC} ${OPTIONS} -o bin/inventory2 samples/inventory2.c common/readline.h readline.o

readline.o: common/readline.h common/readline.c
	${CC} ${OPTIONS} -c common/readline.h common/readline.c

projects01: common/readline.h projects/projects01.c readline.o
	${CC} ${OPTIONS} -o bin/projects01 projects/projects01.c common/readline.h readline.o

projects02: common/readline.h projects/projects02.c readline.o
	${CC} ${OPTIONS} -o bin/projects02 projects/projects02.c common/readline.h readline.o

projects03: common/readline.h projects/projects03.c readline.o
	${CC} ${OPTIONS} -o bin/projects03 projects/projects03.c common/readline.h readline.o

projects04: projects/projects04.c common/word.h common/line.h word.o line.o
	${CC} ${OPTIONS} -o bin/projects04 projects/projects04.c common/word.h common/line.h word.o line.o

word.o: common/word.c common/word.h
	${CC} ${OPTIONS} -c common/word.c common/word.h

line.o: common/line.c common/line.h
	${CC} ${OPTIONS} -c common/line.c common/line.h

clean:
	${RM} -fR bin && ${RM} *.o && ${RM} */*.gch

