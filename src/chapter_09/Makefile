# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir

OPTIONS=-O0 -g -Wall -W -pedantic -std=c99 -o

compile:
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/average		samples/average.c
	${CC} ${OPTIONS} bin/countdown		samples/countdown.c
	${CC} ${OPTIONS} bin/pun2		samples/pun2.c
	${CC} ${OPTIONS} bin/prime		samples/prime.c
	${CC} ${OPTIONS} bin/qsort		samples/qsort.c

	${CC} ${OPTIONS} bin/exercises01	exercises/exercises01.c
	${CC} ${OPTIONS} bin/exercises02	exercises/exercises02.c
	${CC} ${OPTIONS} bin/exercises03	exercises/exercises03.c
	${CC} ${OPTIONS} bin/exercises04	exercises/exercises04.c
	${CC} ${OPTIONS} bin/exercises05	exercises/exercises05.c
	${CC} ${OPTIONS} bin/exercises06	exercises/exercises06.c
	${CC} ${OPTIONS} bin/exercises07	exercises/exercises07.c
	${CC} ${OPTIONS} bin/exercises09	exercises/exercises09.c
	${CC} ${OPTIONS} bin/exercises10	exercises/exercises10.c
	${CC} ${OPTIONS} bin/exercises11	exercises/exercises11.c
	${CC} ${OPTIONS} bin/exercises11	exercises/exercises11.c
	${CC} ${OPTIONS} bin/exercises12	exercises/exercises12.c
	${CC} ${OPTIONS} bin/exercises13	exercises/exercises13.c
	${CC} ${OPTIONS} bin/exercises14	exercises/exercises14.c
	${CC} ${OPTIONS} bin/exercises15	exercises/exercises15.c
	${CC} ${OPTIONS} bin/exercises16	exercises/exercises16.c
	${CC} ${OPTIONS} bin/exercises17	exercises/exercises17.c
	${CC} ${OPTIONS} bin/exercises18	exercises/exercises18.c
	${CC} ${OPTIONS} bin/exercises19	exercises/exercises19.c

	${CC} ${OPTIONS} bin/projects01		projects/projects01.c
	${CC} ${OPTIONS} bin/projects02		projects/projects02.c
	${CC} ${OPTIONS} bin/projects03		projects/projects03.c
	${CC} ${OPTIONS} bin/projects04		projects/projects04.c
	${CC} ${OPTIONS} bin/projects05		projects/projects05.c
	${CC} ${OPTIONS} bin/projects06		projects/projects06.c
	${CC} ${OPTIONS} bin/projects07		projects/projects07.c
	${CC} ${OPTIONS} bin/projects08		projects/projects08.c

clean:
	${RM} -fR bin
