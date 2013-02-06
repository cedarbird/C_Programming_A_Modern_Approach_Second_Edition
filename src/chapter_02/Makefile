# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: *.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/pun			pun.c
	${CC} ${OPTIONS} bin/dweight			dweight.c
	${CC} ${OPTIONS} bin/dweight2			dweight2.c
	${CC} ${OPTIONS} bin/celsius			celsius.c

	${CC} ${OPTIONS} bin/exercises01		exercises01.c
	${CC} ${OPTIONS} bin/exercises02		exercises02.c
	${CC} ${OPTIONS} bin/exercises03		exercises03.c
	${CC} ${OPTIONS} bin/exercises04		exercises04.c

	${CC} ${OPTIONS} bin/printstar print_star.c
	${CC} ${OPTIONS} bin/calculatevolume calculate_volume.c
	${CC} ${OPTIONS} bin/addtax add_tax.c
	${CC} ${OPTIONS} bin/calculatepolynomial calculate_polynomial.c
	${CC} ${OPTIONS} bin/calculatepolynomial2 calculate_polynomial2.c
	${CC} ${OPTIONS} bin/pay pay.c
	${CC} ${OPTIONS} bin/calculatebalance calculate_balance.c

clean:
	${RM} -fR bin
