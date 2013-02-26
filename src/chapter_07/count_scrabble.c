/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* count_scrabble.c (Chapter 07, page 158) */

#include <stdio.h>
#include <ctype.h>

int main(void)
  {
    char ch;
    int value = 0;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n')
      switch (toupper(ch)) {
        case 'D': case 'G':
          value += 2; break;
        case 'B': case 'C': case 'M': case 'P':
          value += 3; break;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
          value += 4; break;
        case 'K':
          value += 5; break;
        case 'J': case 'X':
          value += 8; break;
        case 'Q': case 'Z':
          value += 10; break;
        default:
          value++; break;
      }

    printf("Scrabble value: %d\n", value);

    return 0;
  }

