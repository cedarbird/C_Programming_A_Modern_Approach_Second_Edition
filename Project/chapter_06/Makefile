# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: src/*.c
	${CC} ${OPTIONS} bin/section61  src/section61.c
	${CC} ${OPTIONS} bin/section62  src/section62.c
	${CC} ${OPTIONS} bin/section63  src/section63.c
	${CC} ${OPTIONS} bin/section66  src/section66.c
	${CC} ${OPTIONS} bin/section67  src/section67.c
	${CC} ${OPTIONS} bin/section68  src/section68.c
	${CC} ${OPTIONS} bin/section69  src/section69.c
	${CC} ${OPTIONS} bin/section611 src/section611.c
	${CC} ${OPTIONS} bin/section613 src/section613.c
	${CC} ${OPTIONS} bin/show_max   src/show_max.c

clean:
	${RM} -f bin/*
