# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir

OPTIONS=-O -Wall -W -pedantic -std=c99 -o

compile:
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/remind		remind.c
	${CC} ${OPTIONS} bin/planet		planet.c

	${CC} ${OPTIONS} bin/exercises01	exercises01.c
	${CC} ${OPTIONS} bin/exercises03	exercises03.c
	${CC} ${OPTIONS} bin/exercises05a	exercises05a.c
	${CC} ${OPTIONS} bin/exercises05b	exercises05b.c
	${CC} ${OPTIONS} bin/exercises06	exercises06.c
	${CC} ${OPTIONS} bin/exercises09	exercises09.c
	${CC} ${OPTIONS} bin/exercises11	exercises11.c
	${CC} ${OPTIONS} bin/exercises12	exercises12.c
	${CC} ${OPTIONS} bin/exercises13	exercises13.c
	${CC} ${OPTIONS} bin/exercises14	exercises14.c
	${CC} ${OPTIONS} bin/exercises16	exercises16.c
	${CC} ${OPTIONS} bin/exercises17	exercises17.c
	${CC} ${OPTIONS} bin/exercises18	exercises18.c

	${CC} ${OPTIONS} bin/projects01		projects01.c
	${CC} ${OPTIONS} bin/projects02a	projects02a.c
	${CC} ${OPTIONS} bin/projects02b	projects02b.c
	${CC} ${OPTIONS} bin/projects02c	projects02c.c
	${CC} ${OPTIONS} bin/projects03		projects03.c
	${CC} ${OPTIONS} bin/projects04		projects04.c
	${CC} ${OPTIONS} bin/projects05		projects05.c
	${CC} ${OPTIONS} bin/projects06		projects06.c
	${CC} ${OPTIONS} bin/projects07		projects07.c
	${CC} ${OPTIONS} bin/projects08		projects08.c
	${CC} ${OPTIONS} bin/projects09		projects09.c
	${CC} ${OPTIONS} bin/projects10		projects10.c
	${CC} ${OPTIONS} bin/projects11		projects11.c
	${CC} ${OPTIONS} bin/projects12		projects12.c
	${CC} ${OPTIONS} bin/projects13		projects13.c
	${CC} ${OPTIONS} bin/projects14		projects14.c
	${CC} ${OPTIONS} bin/projects15		projects15.c
	${CC} ${OPTIONS} bin/projects16		projects16.c
	${CC} ${OPTIONS} bin/projects17		projects17.c
	${CC} ${OPTIONS} bin/projects18		projects18.c

clean:
	${RM} -fR bin

