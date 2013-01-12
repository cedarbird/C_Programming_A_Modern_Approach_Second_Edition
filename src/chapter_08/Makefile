# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
MKDIR=mkdir

OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: *.c
	${MKDIR} -p bin
	${CC} ${OPTIONS} bin/reverse		reverse.c
	${CC} ${OPTIONS} bin/repdigit		repdigit.c
	${CC} ${OPTIONS} bin/interest		interest.c
	${CC} ${OPTIONS} bin/exercises03	exercises03.c
	${CC} ${OPTIONS} bin/exercises04	exercises04.c
	${CC} ${OPTIONS} bin/exercises05	exercises05.c
	${CC} ${OPTIONS} bin/exercises06	exercises06.c
	${CC} ${OPTIONS} bin/exercises07	exercises07.c
	${CC} ${OPTIONS} bin/exercises08	exercises08.c
	${CC} ${OPTIONS} bin/exercises09	exercises09.c
	${CC} ${OPTIONS} bin/exercises10	exercises10.c
	${CC} ${OPTIONS} bin/exercises11	exercises11.c
	${CC} ${OPTIONS} bin/projects01		projects01.c
	${CC} ${OPTIONS} bin/projects02		projects02.c
	${CC} ${OPTIONS} bin/projects03		projects03.c
	${CC} ${OPTIONS} bin/projects04		projects04.c
	${CC} ${OPTIONS} bin/projects05		projects05.c
	${CC} ${OPTIONS} bin/projects06		projects06.c
	${CC} ${OPTIONS} bin/projects07		projects07.c

clean:
	${RM} -fR bin
