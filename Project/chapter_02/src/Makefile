# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile:pun.c dweight.c dweight2.c celsius.c
	${CC} ${OPTIONS} ../bin/pun pun.c
	${CC} ${OPTIONS} ../bin/dweight dweight.c
	${CC} ${OPTIONS} ../bin/dweight2 dweight2.c
	${CC} ${OPTIONS} ../bin/celsius celsius.c

clean:
	rm -f ../bin/*
