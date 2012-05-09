# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: *.c
	${CC} ${OPTIONS} ../bin/tprintf tprintf.c
	${CC} ${OPTIONS} ../bin/printnum printnum.c

clean:
	rm -f ../bin/*
