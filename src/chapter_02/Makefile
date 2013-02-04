# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o
OPTIONS89=-O -Wall -W -pedantic -ansi -std=c89 -o

compile: *.c
	${CC} ${OPTIONS} bin/pun pun.c
	${CC} ${OPTIONS} bin/dweight dweight.c
	${CC} ${OPTIONS} bin/dweight2 dweight2.c
	${CC} ${OPTIONS} bin/dweight3 dweight3.c
	${CC} ${OPTIONS} bin/celsius celsius.c
	${CC} ${OPTIONS89} bin/hello hello.c
	${CC} ${OPTIONS} bin/printstar print_star.c
	${CC} ${OPTIONS} bin/calculatevolume calculate_volume.c
	${CC} ${OPTIONS} bin/addtax add_tax.c
	${CC} ${OPTIONS} bin/calculatepolynomial calculate_polynomial.c
	${CC} ${OPTIONS} bin/calculatepolynomial2 calculate_polynomial2.c
	${CC} ${OPTIONS} bin/pay pay.c
	${CC} ${OPTIONS} bin/calculatebalance calculate_balance.c

clean:
	${RM} -f bin/*
