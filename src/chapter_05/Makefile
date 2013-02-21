# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: *.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/broker		broker.c
	${CC} ${OPTIONS} bin/date		date.c

	${CC} ${OPTIONS} bin/exercises01	exercises01.c
	${CC} ${OPTIONS} bin/exercises03	exercises03.c
	${CC} ${OPTIONS} bin/exercises11	exercises11.c

	${CC} ${OPTIONS} bin/projects01		projects01.c
	${CC} ${OPTIONS} bin/projects02		projects02.c
	${CC} ${OPTIONS} bin/lettergrade	lettergrade.c
	${CC} ${OPTIONS} bin/estimate_windforce	estimate_windforce.c
	${CC} ${OPTIONS} bin/cal_tax    	cal_tax.c
	${CC} ${OPTIONS} bin/upc3       	upc3.c
	${CC} ${OPTIONS} bin/maxminin4  	maxminin4.c
	${CC} ${OPTIONS} bin/flight     	flight.c
	${CC} ${OPTIONS} bin/show2digit 	show2digit.c
	${CC} ${OPTIONS} bin/show_earlierday	show_earlierday.c

clean:
	${RM} -fR bin
