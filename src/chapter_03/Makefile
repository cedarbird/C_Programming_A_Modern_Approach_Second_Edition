# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: *.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/tprintf		tprintf.c

	${CC} ${OPTIONS} bin/printnum src/printnum.c
	${CC} ${OPTIONS} bin/printfloat src/printfloat.c
	${CC} ${OPTIONS} bin/yyyymmdd src/yyyymmdd.c
	${CC} ${OPTIONS} bin/productinfo src/productinfo.c
	${CC} ${OPTIONS} bin/isbn src/isbn.c
	${CC} ${OPTIONS} bin/tel src/tel.c
	${CC} ${OPTIONS} bin/magicsquare src/magicsquare.c
	${CC} ${OPTIONS} bin/addfrac2 src/addfrac2.c

clean:
	${RM} -fR bin
