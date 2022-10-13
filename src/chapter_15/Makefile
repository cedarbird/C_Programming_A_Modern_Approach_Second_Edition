# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O0 -g -Wall -W -pedantic -std=c99

all: init justify exercises04 projects01 projects02 projects03 projects04 projects05

init:
	${MKDIR} -p bin 

justify: justify.o word.o line.o
	${CC} ${OPTIONS} -o bin/justify justify.o word.o line.o

justify.o: samples/justify.c common/word.h common/line.h
	${CC} ${OPTIONS} -c samples/justify.c common/word.h common/line.h

word.o: common/word.c common/word.h
	${CC} ${OPTIONS} -c common/word.c common/word.h

line.o: common/line.c common/line.h
	${CC} ${OPTIONS} -c common/line.c common/line.h

exercises04: exercises/exercises04.c exercises/exercises04.h
	${CC} ${OPTIONS} -DDEBUG -o bin/exercises04 exercises/exercises04.c exercises/exercises04.h

projects01: justify.o word.o prj01_line.o
	${CC} ${OPTIONS} -o bin/projects01 justify.o word.o prj01_line.o

prj01_line.o: projects/prj01_line.c common/line.h
	${CC} ${OPTIONS} -c projects/prj01_line.c common/line.h

projects02: projects02.o prj02_word.o line.o
	${CC} ${OPTIONS} -o bin/projects02 projects02.o prj02_word.o line.o

projects02.o: projects/projects02.c common/word.h common/line.h
	${CC} ${OPTIONS} -c projects/projects02.c common/word.h common/line.h

prj02_word.o: projects/prj02_word.c common/word.h
	${CC} ${OPTIONS} -c projects/prj02_word.c common/word.h

projects03: projects/projects03.c common/quicksort.h quicksort.o
	${CC} ${OPTIONS} -o bin/projects03 projects/projects03.c common/quicksort.h quicksort.o

quicksort.o: common/quicksort.h common/quicksort.c
	${CC} ${OPTIONS} -c common/quicksort.c common/quicksort.h

projects04: projects/projects04.c common/readline.h readline.o
	${CC} ${OPTIONS} -o bin/projects04 projects/projects04.c common/readline.h readline.o

readline.o: common/readline.h common/readline.c
	${CC} ${OPTIONS} -c common/readline.c common/readline.h

projects05: projects/projects05.c common/stack.h stack.o
	${CC} ${OPTIONS} -o bin/projects05 projects/projects05.c common/stack.h stack.o

stack.o: common/stack.h common/stack.c
	${CC} ${OPTIONS} -c common/stack.c common/stack.h

clean:
	${RM} -fR bin && ${RM} -f *.o && ${RM} -f */*.gch
