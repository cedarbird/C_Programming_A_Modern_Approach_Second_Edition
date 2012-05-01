# %W% %G% %U%
#
# pun makefile

SHELL=/bin/sh
CC=gcc
CP=cp
RM=rm

compile:pun.c dweight.c dweight2.c
	${CC} pun.c -o ../bin/pun
	${CC} dweight.c -o ../bin/dweight
	${CC} dweight2.c -o ../bin/dweight2

clean:
	rm -f ../bin/*
