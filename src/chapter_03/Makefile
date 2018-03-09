# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -std=c99 -o

compile: *.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/tprintf		tprintf.c
	${CC} ${OPTIONS} bin/addfrac		addfrac.c

	${CC} ${OPTIONS} bin/exercises06	exercises06.c

	${CC} ${OPTIONS} bin/projects01		projects01.c
	${CC} ${OPTIONS} bin/projects02		projects02.c
	${CC} ${OPTIONS} bin/projects03		projects03.c
	${CC} ${OPTIONS} bin/projects04		projects04.c
	${CC} ${OPTIONS} bin/projects05		projects05.c
	${CC} ${OPTIONS} bin/projects06		projects06.c

clean:
	${RM} -fR bin
