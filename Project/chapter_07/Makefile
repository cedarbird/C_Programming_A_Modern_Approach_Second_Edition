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
	${CC} ${OPTIONS} bin/convert_alphabetic_phone src/convert_alphabetic_phone.c
	${CC} ${OPTIONS} bin/sum2       src/sum2.c
	${CC} ${OPTIONS} bin/count_scrabble src/count_scrabble.c
	${CC} ${OPTIONS} bin/print_sizeof src/print_sizeof.c
	${CC} ${OPTIONS} bin/convert24hour src/convert24hour.c
	${CC} ${OPTIONS} bin/calculator src/calculator.c
clean:
	${RM} -f bin/*
