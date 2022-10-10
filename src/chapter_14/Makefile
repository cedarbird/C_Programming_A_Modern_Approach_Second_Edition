# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir

OPTIONS=-O0 -g -Wall -W -pedantic -std=c99 -o

compile:
	${MKDIR} -p bin

	${CC} ${OPTIONS} bin/exercises01	exercises/exercises01.c
	${CC} ${OPTIONS} bin/exercises02	exercises/exercises02.c
	${CC} ${OPTIONS} bin/exercises06	exercises/exercises06.c
	${CC} ${OPTIONS} bin/exercises08	exercises/exercises08.c
	${CC} ${OPTIONS} bin/exercises09	exercises/exercises09.c
	${CC} ${OPTIONS} bin/exercises15	exercises/exercises15.c

clean:
	${RM} -fR bin

