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

  for (; *word; word++)
    switch (toupper(*word)) {
      case 'D': case 'G':
        sum += 2; break;
      case 'B': case 'C': case 'M': case 'P':
        sum += 3; break;
      case 'F': case 'H': case 'V': case 'W': case 'Y':
        sum += 4; break;
      case 'K':
        sum += 5; break;
      case 'J': case 'X':
        sum += 8; break;
      case 'Q': case 'Z':
        sum += 10; break;
      default:
        sum++; break;
    }

  return sum;
}

