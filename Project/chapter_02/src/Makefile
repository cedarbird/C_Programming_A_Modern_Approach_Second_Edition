# %W% %G% %U%
#
# pun makefile

SHELL=/bin/sh
CC=gcc
CP=cp
RM=rm

# flags for common K&R compiles
#
CFLAGS=-O
CC=cc

compile:pun.c dweight.c
	${CC} ${CFLAGS} pun.c -o ../bin/pun
	${CC} ${CFLAGS} dweight.c -o ../bin/dweight

clean:
	rm -f ../bin/*
