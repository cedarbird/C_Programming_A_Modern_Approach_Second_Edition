# Makefile

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
	${CC} ${OPTIONS} bin/euclid     src/euclid.c
	${CC} ${OPTIONS} bin/lowest_term src/lowest_term.c
	${CC} ${OPTIONS} bin/broker     src/broker.c
	${CC} ${OPTIONS} bin/reversaldigit src/reversaldigit.c
	${CC} ${OPTIONS} bin/squre      src/squre.c
	${CC} ${OPTIONS} bin/show_calendar src/show_calendar.c
	${CC} ${OPTIONS} bin/calculate_balance src/calculate_balance.c
	${CC} ${OPTIONS} bin/show_earliestday src/show_earliestday.c
	${CC} ${OPTIONS} bin/ln         src/ln.c
	${CC} ${OPTIONS} bin/ln2        src/ln2.c

clean:
	${RM} -f bin/*
