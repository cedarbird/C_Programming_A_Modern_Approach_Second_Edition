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
	${CC} ${OPTIONS} bin/pun2			pun2.c
	${CC} ${OPTIONS} bin/prime			prime.c
	${CC} ${OPTIONS} bin/qsort			qsort.c

clean:
	${RM} -fR bin
