# %W% %G% %U%

SHELL=/bin/sh
CC=gcc
RM=rm
OPTIONS=-O -Wall -W -pedantic -ansi -std=c99 -o

compile: src/*.c
	${CC} ${OPTIONS} bin/section71  src/section71.c
	${CC} ${OPTIONS} bin/section72  src/section72.c
	${CC} ${OPTIONS} bin/section75  src/section75.c
	${CC} ${OPTIONS} bin/section77  src/section77.c
	${CC} ${OPTIONS} bin/section78  src/section78.c
	${CC} ${OPTIONS} bin/section715  src/section715.c
	${CC} ${OPTIONS} bin/count_vowels src/count_vowels.c
	${CC} ${OPTIONS} bin/reverse_name src/reverse_name.c

clean:
	${RM} -f bin/*
