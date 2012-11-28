# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: src/*.c
	${CC} ${OPTIONS} bin/lettergrade src/lettergrade.c
	${CC} ${OPTIONS} bin/cal_digits  src/cal_digits.c
	${CC} ${OPTIONS} bin/convert12hour  src/convert12hour.c
	${CC} ${OPTIONS} bin/estimate_windforce  src/estimate_windforce.c
	${CC} ${OPTIONS} bin/cal_tax     src/cal_tax.c
	${CC} ${OPTIONS} bin/upc3        src/upc3.c
	${CC} ${OPTIONS} bin/maxminin4   src/maxminin4.c
	${CC} ${OPTIONS} bin/flight      src/flight.c
	${CC} ${OPTIONS} bin/show2digit  src/show2digit.c

clean:
	${RM} -f bin/*
