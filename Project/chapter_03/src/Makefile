# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: *.c
	${CC} ${OPTIONS} ../bin/tprintf tprintf.c
	${CC} ${OPTIONS} ../bin/printnum printnum.c
	${CC} ${OPTIONS} ../bin/printfloat printfloat.c
	${CC} ${OPTIONS} ../bin/yyyymmdd yyyymmdd.c
	${CC} ${OPTIONS} ../bin/productinfo productinfo.c
	${CC} ${OPTIONS} ../bin/isbn isbn.c
	${CC} ${OPTIONS} ../bin/tel tel.c

clean:
	rm -f ../bin/*
