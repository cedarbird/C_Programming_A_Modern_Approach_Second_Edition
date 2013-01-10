# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: src/*.c
	${CC} ${OPTIONS} bin/reverse		src/reverse.c
	${CC} ${OPTIONS} bin/exercises05	src/exercises05.c
	${CC} ${OPTIONS} bin/exercises10	src/exercises10.c
	${CC} ${OPTIONS} bin/exercises11	src/exercises11.c
	${CC} ${OPTIONS} bin/projects02		src/projects02.c
	${CC} ${OPTIONS} bin/projects07		src/projects07.c

clean:
	${RM} -f bin/*
