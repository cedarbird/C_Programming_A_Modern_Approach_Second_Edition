# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir

OPTIONS=-O0 -g -Wall -W -pedantic -std=c99 -o

compile:
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/remind		samples/remind.c
	${CC} ${OPTIONS} bin/planet		samples/planet.c

	${CC} ${OPTIONS} bin/exercises01	exercises/exercises01.c
	${CC} ${OPTIONS} bin/exercises03	exercises/exercises03.c
	${CC} ${OPTIONS} bin/exercises05a	exercises/exercises05a.c
	${CC} ${OPTIONS} bin/exercises05b	exercises/exercises05b.c
	${CC} ${OPTIONS} bin/exercises06	exercises/exercises06.c
	${CC} ${OPTIONS} bin/exercises09	exercises/exercises09.c
	${CC} ${OPTIONS} bin/exercises11	exercises/exercises11.c
	${CC} ${OPTIONS} bin/exercises12	exercises/exercises12.c
	${CC} ${OPTIONS} bin/exercises13	exercises/exercises13.c
	${CC} ${OPTIONS} bin/exercises14	exercises/exercises14.c
	${CC} ${OPTIONS} bin/exercises16	exercises/exercises16.c
	${CC} ${OPTIONS} bin/exercises17	exercises/exercises17.c
	${CC} ${OPTIONS} bin/exercises18	exercises/exercises18.c

	${CC} ${OPTIONS} bin/projects01		projects/projects01.c
	${CC} ${OPTIONS} bin/projects02a	projects/projects02a.c
	${CC} ${OPTIONS} bin/projects02b	projects/projects02b.c
	${CC} ${OPTIONS} bin/projects02c	projects/projects02c.c
	${CC} ${OPTIONS} bin/projects03		projects/projects03.c
	${CC} ${OPTIONS} bin/projects04		projects/projects04.c
	${CC} ${OPTIONS} bin/projects05		projects/projects05.c
	${CC} ${OPTIONS} bin/projects06		projects/projects06.c
	${CC} ${OPTIONS} bin/projects07		projects/projects07.c
	${CC} ${OPTIONS} bin/projects08		projects/projects08.c
	${CC} ${OPTIONS} bin/projects09		projects/projects09.c
	${CC} ${OPTIONS} bin/projects10		projects/projects10.c
	${CC} ${OPTIONS} bin/projects11		projects/projects11.c
	${CC} ${OPTIONS} bin/projects12		projects/projects12.c
	${CC} ${OPTIONS} bin/projects13		projects/projects13.c
	${CC} ${OPTIONS} bin/projects14		projects/projects14.c
	${CC} ${OPTIONS} bin/projects15		projects/projects15.c
	${CC} ${OPTIONS} bin/projects16		projects/projects16.c
	${CC} ${OPTIONS} bin/projects17		projects/projects17.c
	${CC} ${OPTIONS} bin/projects18		projects/projects18.c

clean:
	${RM} -fR bin

