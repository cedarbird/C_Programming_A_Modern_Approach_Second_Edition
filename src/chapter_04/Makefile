# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: *.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/upc		upc.c

	${CC} ${OPTIONS} bin/exercises01	exercises01.c
	${CC} ${OPTIONS} bin/exercises10	exercises10.c
	${CC} ${OPTIONS} bin/exercises11	exercises11.c
	${CC} ${OPTIONS} bin/exercises12	exercises12.c

	${CC} ${OPTIONS} bin/reversaldigit2	reversaldigit2.c
	${CC} ${OPTIONS} bin/reversaldigit3	reversaldigit3.c
	${CC} ${OPTIONS} bin/reversaldigit3_2	reversaldigit3_2.c
	${CC} ${OPTIONS} bin/convert_to_octal	convert_to_octal.c
	${CC} ${OPTIONS} bin/upc2		upc2.c
	${CC} ${OPTIONS} bin/ean		ean.c

clean:
	${RM} -fR bin

