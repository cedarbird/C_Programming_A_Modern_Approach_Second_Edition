/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects12.c (Chapter 08, page 180) */
/* Computes the value of a SCRABBLE Crossword. */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;
  int value = 0;
  const int scrabble_value[] = {1, 3, 3, 2, 1, 4,  2, 4, 1, 8,
                                5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
                                1, 4, 4, 8, 4, 10};

  printf("Enter a word: ");
  while ((ch = getchar()) != '\n')
    value += scrabble_value[toupper(ch) - 'A'];

  printf("Scrabble value: %d\n", value);

  return 0;
}

