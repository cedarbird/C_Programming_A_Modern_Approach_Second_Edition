# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir

OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile:
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/average		average.c
	${CC} ${OPTIONS} bin/countdown		countdown.c
	${CC} ${OPTIONS} bin/pun2		pun2.c
	${CC} ${OPTIONS} bin/prime		prime.c
	${CC} ${OPTIONS} bin/qsort		qsort.c

	${CC} ${OPTIONS} bin/exercises01	exercises01.c
	${CC} ${OPTIONS} bin/exercises02	exercises02.c
	${CC} ${OPTIONS} bin/exercises03	exercises03.c
	${CC} ${OPTIONS} bin/exercises04	exercises04.c
	${CC} ${OPTIONS} bin/exercises05	exercises05.c
	${CC} ${OPTIONS} bin/exercises06	exercises06.c
	${CC} ${OPTIONS} bin/exercises07	exercises07.c
	${CC} ${OPTIONS} bin/exercises10	exercises10.c
	${CC} ${OPTIONS} bin/exercises11	exercises11.c

clean:
	${RM} -fR bin