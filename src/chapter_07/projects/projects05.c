/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects05.c (Chapter 07, page 158) */
/* Computes the value of a SCRABBLE Crossword. */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
  int sum = 0;
  char ch;

  printf("Enter a word: ");

  while ((ch = getchar()) != '\n') {
    switch (toupper(ch)) {
      case 'A': case 'E': case 'I': case 'L': case 'N':
      case 'O': case 'R': case 'S': case 'T': case 'U':
        sum++;    break;
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
        break;
    }
  }

  printf("Scrabble value: %d\n", sum);

  return 0;
}

