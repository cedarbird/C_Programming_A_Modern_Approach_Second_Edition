# %W% %G% %U%
#
# baruch makefile

SHELL=/bin/sh
CC=gcc
CP=cp
RM=rm

# flags for common K&R compiles
#
CFLAGS=-O
CC=cc

compile: src/baruch.c
	${CC} ${CFLAGS} src/baruch.c -o bin/baruch

clean:
	rm -f bin/*
