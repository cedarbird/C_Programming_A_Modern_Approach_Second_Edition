# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -std=c99 -o

compile: *.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/sum2.c		sum2.c
	${CC} ${OPTIONS} bin/length		length.c
	${CC} ${OPTIONS} bin/length2		length2.c

	${CC} ${OPTIONS} bin/exercises07		exercises07.c
	${CC} ${OPTIONS} bin/exercises13		exercises13.c

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
	${CC} ${OPTIONS} bin/projects13		projects13.c
	${CC} ${OPTIONS} bin/projects14		projects14.c
	${CC} ${OPTIONS} bin/projects15		projects15.c

clean:
	${RM} -fR bin

