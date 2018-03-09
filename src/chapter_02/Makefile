# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -std=c99 -g -O0 -o

compile: *.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/pun			pun.c
	${CC} ${OPTIONS} bin/dweight			dweight.c
	${CC} ${OPTIONS} bin/dweight2			dweight2.c
	${CC} ${OPTIONS} bin/celsius			celsius.c

	${CC} ${OPTIONS} bin/exercises01		exercises01.c
	${CC} ${OPTIONS} bin/exercises02		exercises02.c
	${CC} ${OPTIONS} bin/exercises03		exercises03.c
	${CC} ${OPTIONS} bin/exercises04		exercises04.c

	${CC} ${OPTIONS} bin/projects01			projects01.c
	${CC} ${OPTIONS} bin/projects02			projects02.c
	${CC} ${OPTIONS} bin/projects03			projects03.c
	${CC} ${OPTIONS} bin/projects04			projects04.c
	${CC} ${OPTIONS} bin/projects05			projects05.c
	${CC} ${OPTIONS} bin/projects06			projects06.c
	${CC} ${OPTIONS} bin/projects07			projects07.c
	${CC} ${OPTIONS} bin/projects08			projects08.c

clean:
	${RM} -fR bin
