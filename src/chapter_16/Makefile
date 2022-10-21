# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-g -O0 -Wall -W -pedantic -std=c99

all: init inventory exercises05 exercises06 exercises07 projects01 projects02 projects03 projects04 projects05 projects06

init:
	${MKDIR} -p bin

inventory: samples/inventory.c common/readline.h readline.o
	${CC} ${OPTIONS} -o bin/inventory samples/inventory.c common/readline.h readline.o

readline.o: common/readline.h common/readline.c
	${CC} ${OPTIONS} -c common/readline.h common/readline.c

exercises05: exercises/exercises05.c
	${CC} ${OPTIONS} -o bin/exercises05 exercises/exercises05.c

exercises06: exercises/exercises06.c
	${CC} ${OPTIONS} -o bin/exercises06 exercises/exercises06.c

exercises07: exercises/exercises07.c
	${CC} ${OPTIONS} -o bin/exercises07 exercises/exercises07.c

projects01: projects/projects01.c
	${CC} ${OPTIONS} -o bin/projects01 projects/projects01.c

projects02: projects/projects02.c common/readline.h common/readline.o
	${CC} ${OPTIONS} -o bin/projects02 projects/projects02.c common/readline.h readline.o

projects03: projects/projects03.c common/readline.h common/readline.o
	${CC} ${OPTIONS} -o bin/projects03 projects/projects03.c common/readline.h readline.o

projects04: projects/projects04.c common/readline.h readline.o
	${CC} ${OPTIONS} -o bin/projects04 projects/projects04.c common/readline.h readline.o

projects05: projects/projects05.c
	${CC} ${OPTIONS} -o bin/projects05 projects/projects05.c

projects06: projects/projects06.c
	${CC} ${OPTIONS} -o bin/projects06 projects/projects06.c

clean:
	${RM} -fR bin && ${RM} *.o && ${RM} */*.gch


