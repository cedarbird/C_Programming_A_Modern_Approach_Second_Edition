# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O0 -g -Wall -W -pedantic -std=c99 -o

compile: */*.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/tprintf		samples/tprintf.c
	${CC} ${OPTIONS} bin/addfrac		samples/addfrac.c

	${CC} ${OPTIONS} bin/exercises06	exercises/exercises06.c

	${CC} ${OPTIONS} bin/projects01		projects/projects01.c
	${CC} ${OPTIONS} bin/projects02		projects/projects02.c
	${CC} ${OPTIONS} bin/projects03		projects/projects03.c
	${CC} ${OPTIONS} bin/projects04		projects/projects04.c
	${CC} ${OPTIONS} bin/projects05		projects/projects05.c
	${CC} ${OPTIONS} bin/projects06		projects/projects06.c

clean:
	${RM} -fR bin
