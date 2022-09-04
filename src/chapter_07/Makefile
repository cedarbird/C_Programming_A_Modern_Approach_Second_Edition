# Makefile

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir
OPTIONS=-O0 -g -Wall -W -pedantic -std=c99 -o

compile: */*.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/sum2.c		samples/sum2.c
	${CC} ${OPTIONS} bin/length		samples/length.c
	${CC} ${OPTIONS} bin/length2		samples/length2.c

	${CC} ${OPTIONS} bin/exercises07	exercises/exercises07.c
	${CC} ${OPTIONS} bin/exercises13	exercises/exercises13.c

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

clean:
	${RM} -fR bin

