/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* count_scrabble.c (Chapter 7, page 158) */

#include <stdio.h>
#include <ctype.h>

int main(void)
  {
    char ch;
    int value = 0;

    printf("Enter a word: ");

    do {
      ch = getchar();
      if (ch >= 'a' && ch <= 'z')
        ch = toupper(ch);
      if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N'
       || ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U')
        value += 1;
      else if (ch == 'D' || ch == 'G')
        value += 2;
      else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
        value += 3;
      else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
        value += 4;
      else if (ch == 'K')
        value += 5;
      else if (ch == 'J' || ch == 'X')
        value += 8;
      else if (ch == 'Q' || ch == 'Z')
        value += 10;
    } while (ch != '\n');

    printf("scrabble value: %d\n", value);

    return 0;
  }

