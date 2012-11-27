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

clean:
	${RM} -f bin/*
