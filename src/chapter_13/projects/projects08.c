/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects08.c (Chapter 13, page 312) */
/* Computes the value of a SCRABBLE Crossword. */

#include <ctype.h>
#include <stdio.h>

int compute_scrabble_value(const char *word);

int main(void)
{
  char word[20];

  printf("Enter a word: ");
  scanf("%s", word);
  printf("Scrabble value: %d\n", compute_scrabble_value(word));

  return 0;
}

int compute_scrabble_value(const char *word)
{
  int sum = 0;
  int scrabble_table[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                          1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  for (; *word; word++)
    if(isalpha(*word))
      sum += scrabble_table[toupper(*word) - 'A'];

  return sum;
}

