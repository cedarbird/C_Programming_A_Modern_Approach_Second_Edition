# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: *.c
	${CC} ${OPTIONS} ../bin/section41 section41.c
	${CC} ${OPTIONS} ../bin/section10 section10.c
	${CC} ${OPTIONS} ../bin/section11 section11.c
	${CC} ${OPTIONS} ../bin/section12 section12.c
	${CC} ${OPTIONS} ../bin/reversaldigit2 reversaldigit2.c
	${CC} ${OPTIONS} ../bin/reversaldigit3 reversaldigit3.c

clean:
	rm -f ../bin/*
