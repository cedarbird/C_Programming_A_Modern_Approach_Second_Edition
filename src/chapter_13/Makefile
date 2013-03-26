# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir

OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile:
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/remind		remind.c
	${CC} ${OPTIONS} bin/planet		planet.c

	${CC} ${OPTIONS} bin/exercises01	exercises01.c
	${CC} ${OPTIONS} bin/exercises03	exercises03.c

	${CC} ${OPTIONS} bin/projects07		projects07.c

clean:
	${RM} -fR bin

