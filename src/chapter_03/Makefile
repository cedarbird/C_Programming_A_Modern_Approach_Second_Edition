# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: *.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/tprintf		tprintf.c
	${CC} ${OPTIONS} bin/addfrac		addfrac.c

	${CC} ${OPTIONS} bin/exercises06	exercises06.c

	${CC} ${OPTIONS} bin/projects01		projects01.c
	${CC} ${OPTIONS} bin/projects02		projects02.c

	${CC} ${OPTIONS} bin/printnum src/printnum.c
	${CC} ${OPTIONS} bin/printfloat src/printfloat.c
	${CC} ${OPTIONS} bin/isbn src/isbn.c
	${CC} ${OPTIONS} bin/tel src/tel.c
	${CC} ${OPTIONS} bin/magicsquare src/magicsquare.c
	${CC} ${OPTIONS} bin/addfrac2 src/addfrac2.c

clean:
	${RM} -fR bin
