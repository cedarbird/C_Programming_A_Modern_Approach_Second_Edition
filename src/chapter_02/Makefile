# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O0 -g -Wall -W -pedantic -std=c99 -g -O0 -o

compile: */*.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/pun			samples/pun.c
	${CC} ${OPTIONS} bin/dweight			samples/dweight.c
	${CC} ${OPTIONS} bin/dweight2			samples/dweight2.c
	${CC} ${OPTIONS} bin/celsius			samples/celsius.c

	${CC} ${OPTIONS} bin/exercises01		exercises/exercises01.c
	${CC} ${OPTIONS} bin/exercises02		exercises/exercises02.c
	${CC} ${OPTIONS} bin/exercises03		exercises/exercises03.c
	${CC} ${OPTIONS} bin/exercises04		exercises/exercises04.c

	${CC} ${OPTIONS} bin/projects01			projects/projects01.c
	${CC} ${OPTIONS} bin/projects02			projects/projects02.c
	${CC} ${OPTIONS} bin/projects03			projects/projects03.c
	${CC} ${OPTIONS} bin/projects04			projects/projects04.c
	${CC} ${OPTIONS} bin/projects05			projects/projects05.c
	${CC} ${OPTIONS} bin/projects06			projects/projects06.c
	${CC} ${OPTIONS} bin/projects07			projects/projects07.c
	${CC} ${OPTIONS} bin/projects08			projects/projects08.c

clean:
	${RM} -fR bin
