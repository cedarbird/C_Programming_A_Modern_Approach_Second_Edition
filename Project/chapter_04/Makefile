# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: src/*.c
	${CC} ${OPTIONS} bin/section41 src/section41.c
	${CC} ${OPTIONS} bin/section10 src/section10.c
	${CC} ${OPTIONS} bin/section11 src/section11.c
	${CC} ${OPTIONS} bin/section12 src/section12.c
	${CC} ${OPTIONS} bin/reversaldigit2 src/reversaldigit2.c
	${CC} ${OPTIONS} bin/reversaldigit3_2 src/reversaldigit3_2.c
	${CC} ${OPTIONS} bin/convert_to_octal src/convert_to_octal.c
	${CC} ${OPTIONS} bin/upc2 src/upc2.c
	${CC} ${OPTIONS} bin/ean src/ean.c

clean:
	rm -f bin/*
