# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: src/*.c
	${CC} ${OPTIONS} bin/reverse src/reverse.c
	${CC} ${OPTIONS} bin/excises03 src/excises03.c
	${CC} ${OPTIONS} bin/excises04 src/excises04.c

clean:
	${RM} -f bin/*
