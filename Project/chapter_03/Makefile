# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile:
	${CC} ${OPTIONS} bin/tprintf src/tprintf.c
	${CC} ${OPTIONS} bin/printnum src/printnum.c
	${CC} ${OPTIONS} bin/printfloat src/printfloat.c
	${CC} ${OPTIONS} bin/yyyymmdd src/yyyymmdd.c
	${CC} ${OPTIONS} bin/productinfo src/productinfo.c
	${CC} ${OPTIONS} bin/isbn src/isbn.c
	${CC} ${OPTIONS} bin/tel src/tel.c
	${CC} ${OPTIONS} bin/magicsquare src/magicsquare.c
	${CC} ${OPTIONS} bin/addfrac2 src/addfrac2.c

clean:
	rm -f bin/*
