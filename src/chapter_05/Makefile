# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -std=c99 -o

compile: */*.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/broker		samples/broker.c
	${CC} ${OPTIONS} bin/date		samples/date.c

	${CC} ${OPTIONS} bin/exercises01	exercises/exercises01.c
	${CC} ${OPTIONS} bin/exercises03	exercises/exercises03.c
	${CC} ${OPTIONS} bin/exercises11	exercises/exercises11.c

	${CC} ${OPTIONS} bin/projects01		projects/projects01.c
	${CC} ${OPTIONS} bin/projects02		projects/projects02.c
	${CC} ${OPTIONS} bin/projects03		projects/projects03.c
	${CC} ${OPTIONS} bin/projects04		projects/projects04.c
	${CC} ${OPTIONS} bin/projects05		projects/projects05.c
	${CC} ${OPTIONS} bin/projects06		projects/projects06.c
	${CC} ${OPTIONS} bin/projects07		projects/projects07.c
	${CC} ${OPTIONS} bin/projects08		projects/projects08.c
	${CC} ${OPTIONS} bin/projects09		projects/projects09.c
	${CC} ${OPTIONS} bin/projects10		projects/projects10.c
	${CC} ${OPTIONS} bin/projects11		projects/projects11.c

clean:
	${RM} -fR bin
