# Makefile

SHELL=/bin/sh
MKDIR=mkdir
OPTIONS=-O0 -g -Wall -W -pedantic -std=c89 -o
RM=rm
CC=cc

compile: baruch.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/baruch baruch.c

clean:
	${RM} -fR bin
