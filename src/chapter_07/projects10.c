/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects10.c (Chapter 07, page 158) */
/* Counts the number of vowels */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;
  int count = 0;

  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n')
    switch (toupper(ch)) {
      case 'A': case 'E': case 'I': case 'O': case 'U':
        count++;
        break;
      default:
        break;
    }

  printf("Your sentence contains %d vowels.\n", count);

  return 0;
}

