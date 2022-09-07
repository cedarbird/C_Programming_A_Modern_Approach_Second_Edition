# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir

OPTIONS=-O0 -g -Wall -W -pedantic -std=c99 -o

compile:
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/reverse		samples/reverse.c
	${CC} ${OPTIONS} bin/reverse2		samples/reverse2.c
	${CC} ${OPTIONS} bin/repdigit		samples/repdigit.c
	${CC} ${OPTIONS} bin/interest		samples/interest.c
	${CC} ${OPTIONS} bin/deal		samples/deal.c

	${CC} ${OPTIONS} bin/exercises03	exercises/exercises03.c
	${CC} ${OPTIONS} bin/exercises04	exercises/exercises04.c
	${CC} ${OPTIONS} bin/exercises05	exercises/exercises05.c
	${CC} ${OPTIONS} bin/exercises06	exercises/exercises06.c
	${CC} ${OPTIONS} bin/exercises07	exercises/exercises07.c
	${CC} ${OPTIONS} bin/exercises08	exercises/exercises08.c
	${CC} ${OPTIONS} bin/exercises09	exercises/exercises09.c
	${CC} ${OPTIONS} bin/exercises10	exercises/exercises10.c
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
	${CC} ${OPTIONS} bin/projects12		projects/projects12.c
	${CC} ${OPTIONS} bin/projects13		projects/projects13.c
	${CC} ${OPTIONS} bin/projects14		projects/projects14.c
	${CC} ${OPTIONS} bin/projects15		projects/projects15.c
	${CC} ${OPTIONS} bin/projects16		projects/projects16.c
	${CC} ${OPTIONS} bin/projects17		projects/projects17.c

clean:
	${RM} -fR bin

