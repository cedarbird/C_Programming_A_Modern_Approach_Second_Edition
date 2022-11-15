# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O0 -g -Wall -W -pedantic -std=c99

all: init linkedlist tabulate remind2 inventory2 exercises01 exercises02 exercises03 \
     exercises06 exercises08 exercises11 exercises12 exercises14 exercises16 exercises19 \
     projects01 projects02 projects03 projects04 projects05

init:
	${MKDIR} -p bin

linkedlist: samples/linkedlist.c
	${CC} ${OPTIONS} -o bin/linkedlist samples/linkedlist.c

tabulate: samples/tabulate.c
	${CC} ${OPTIONS} -o bin/tabulate samples/tabulate.c -lm

remind2: samples/remind2.c
	${CC} ${OPTIONS} -o bin/remind2 samples/remind2.c

inventory2: samples/inventory2.c common/readline.h readline.o
	${CC} ${OPTIONS} -o bin/inventory2 samples/inventory2.c common/readline.h readline.o

readline.o: common/readline.h common/readline.c
	${CC} ${OPTIONS} -c common/readline.h common/readline.c

exercises01: exercises/exercises01.c
	${CC} ${OPTIONS} -o bin/exercises01 exercises/exercises01.c

exercises02: exercises/exercises02.c
	${CC} ${OPTIONS} -o bin/exercises02 exercises/exercises02.c

exercises03: exercises/exercises03.c
	${CC} ${OPTIONS} -o bin/exercises03 exercises/exercises03.c

exercises06: exercises/exercises06.c
	${CC} ${OPTIONS} -o bin/exercises06 exercises/exercises06.c

exercises08: exercises/exercises08.c
	${CC} ${OPTIONS} -o bin/exercises08 exercises/exercises08.c

exercises11: exercises/exercises11.c
	${CC} ${OPTIONS} -o bin/exercises11 exercises/exercises11.c

exercises12: exercises/exercises12.c
	${CC} ${OPTIONS} -o bin/exercises12 exercises/exercises12.c

exercises14: exercises/exercises14.c
	${CC} ${OPTIONS} -o bin/exercises14 exercises/exercises14.c

exercises16: exercises/exercises16.c
	${CC} ${OPTIONS} -o bin/exercises16 exercises/exercises16.c

projects01: common/readline.h projects/projects01.c readline.o
	${CC} ${OPTIONS} -o bin/projects01 projects/projects01.c common/readline.h readline.o

exercises19: exercises/exercises19.c
	${CC} ${OPTIONS} -o bin/exercises19 exercises/exercises19.c

projects02: common/readline.h projects/projects02.c readline.o
	${CC} ${OPTIONS} -o bin/projects02 projects/projects02.c common/readline.h readline.o

projects03: common/readline.h projects/projects03.c readline.o
	${CC} ${OPTIONS} -o bin/projects03 projects/projects03.c common/readline.h readline.o

projects04: projects/projects04.c common/word.h common/line.h word.o line.o
	${CC} ${OPTIONS} -o bin/projects04 projects/projects04.c common/word.h common/line.h word.o line.o

projects05: projects/projects05.c
	${CC} ${OPTIONS} -o bin/projects05 projects/projects05.c

word.o: common/word.c common/word.h
	${CC} ${OPTIONS} -c common/word.c common/word.h

line.o: common/line.c common/line.h
	${CC} ${OPTIONS} -c common/line.c common/line.h

clean:
	${RM} -fR bin && ${RM} *.o && ${RM} */*.gch

