# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o
OPTIONS89=-O -Wall -W -pedantic -ansi -std=c89 -o

compile: src/*.c
	${CC} ${OPTIONS} bin/pun src/pun.c
	${CC} ${OPTIONS} bin/dweight src/dweight.c
	${CC} ${OPTIONS} bin/dweight2 src/dweight2.c
	${CC} ${OPTIONS} bin/dweight3 src/dweight3.c
	${CC} ${OPTIONS} bin/celsius src/celsius.c
	${CC} ${OPTIONS89} bin/hello src/hello.c
	${CC} ${OPTIONS} bin/printstar src/print_star.c
	${CC} ${OPTIONS} bin/calculatevolume src/calculate_volume.c
	${CC} ${OPTIONS} bin/addtax src/add_tax.c
	${CC} ${OPTIONS} bin/calculatepolynomial src/calculate_polynomial.c
	${CC} ${OPTIONS} bin/calculatepolynomial2 src/calculate_polynomial2.c
	${CC} ${OPTIONS} bin/pay src/pay.c
	${CC} ${OPTIONS} bin/calculatebalance src/calculate_balance.c

clean:
	${RM} -f bin/*
