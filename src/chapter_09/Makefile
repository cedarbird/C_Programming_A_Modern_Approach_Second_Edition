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
	${CC} ${OPTIONS} bin/exercises11	exercises11.c
	${CC} ${OPTIONS} bin/exercises12	exercises12.c
	${CC} ${OPTIONS} bin/exercises13	exercises13.c
	${CC} ${OPTIONS} bin/exercises14	exercises14.c
	${CC} ${OPTIONS} bin/exercises15	exercises15.c
	${CC} ${OPTIONS} bin/exercises16	exercises16.c
	${CC} ${OPTIONS} bin/exercises17	exercises17.c
	${CC} ${OPTIONS} bin/exercises18	exercises18.c
	${CC} ${OPTIONS} bin/exercises19	exercises19.c

	${CC} ${OPTIONS} bin/projects01		projects01.c
	${CC} ${OPTIONS} bin/projects02		projects02.c
	${CC} ${OPTIONS} bin/projects03		projects03.c
	${CC} ${OPTIONS} bin/projects08		projects08.c

clean:
	${RM} -fR bin
