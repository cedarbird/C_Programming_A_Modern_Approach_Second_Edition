/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* count_vowels.c (Chapter 07, page 158) */

#include <stdio.h>

int main(void)
  {
    char ch;
    int count = 0;
    do {
      ch = getchar();
      if ( ch >= 'A' && ch <= 'Z')
        ch = ch + 'a' - 'A';
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        count++;
    } while (ch != '\n');

    printf("Your sentence contains %d vowels.\n", count);

    return 0;
  }

