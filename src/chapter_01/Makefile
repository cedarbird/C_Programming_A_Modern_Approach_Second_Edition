# %W% %G% %U%
#
# baruch makefile

SHELL=/bin/sh
MKDIR=mkdir
OPTIONS=-O -Wall -W -pedantic -ansi -std=c89 -o
#CC=gcc
#RM=rm

# flags for common K&R compiles
#
CC=cc

compile: baruch.c
	${MKDIR} -p  bin
	${CC} ${OPTIONS} bin/baruch baruch.c

clean:
	${RM} -f bin/*
