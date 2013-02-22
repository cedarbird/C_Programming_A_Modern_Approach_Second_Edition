# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: *.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/square		square.c
	${CC} ${OPTIONS} bin/sum		sum.c
	${CC} ${OPTIONS} bin/numdigits		numdigits.c
	${CC} ${OPTIONS} bin/square2		square2.c
	${CC} ${OPTIONS} bin/square3		square3.c
	${CC} ${OPTIONS} bin/checking		checking.c

	${CC} ${OPTIONS} bin/exercises01	exercises01.c
	${CC} ${OPTIONS} bin/exercises03	exercises03.c
	${CC} ${OPTIONS} bin/exercises11	exercises11.c

	${CC} ${OPTIONS} bin/projects01		projects01.c
	${CC} ${OPTIONS} bin/projects02		projects02.c
	${CC} ${OPTIONS} bin/projects03		projects03.c
	${CC} ${OPTIONS} bin/projects04		projects04.c
	${CC} ${OPTIONS} bin/projects05		projects05.c
	${CC} ${OPTIONS} bin/projects06		projects06.c
	${CC} ${OPTIONS} bin/projects07		projects07.c
	${CC} ${OPTIONS} bin/projects08		projects08.c
	${CC} ${OPTIONS} bin/projects09		projects09.c
	${CC} ${OPTIONS} bin/projects10		projects10.c
	${CC} ${OPTIONS} bin/projects11		projects11.c
	${CC} ${OPTIONS} bin/projects12		projects12.c

clean:
	${RM} -fR bin

