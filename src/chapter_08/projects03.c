/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects03.c (Chapter 08, page 178) */
/* Checks numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

#define NUMS_OF_DECIMAL 10

int main(void)
  {
    bool digit_seen[NUMS_OF_DECIMAL] = {false};
    int digit;
    long n;

    while(true) {
      printf("Enter a number: ");
      scanf("%ld", &n);
      if (n <= 0)
        break;

      while (n > 0) {
        digit = n % NUMS_OF_DECIMAL;
        if (digit_seen[digit])
          break;
        digit_seen[digit] = true;
      }

      if (n > 0)
        printf("Repeated digit\n");
      else
        printf("No Repeated digit\n");
    }

    return 0;
  }

