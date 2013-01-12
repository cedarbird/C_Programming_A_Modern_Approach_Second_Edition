/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects02.c (Chapter 08, page 178) */
/* count repeated digits */

#include <stdio.h>

#define NUMS_OF_DECIMAL 10

int main(void)
  {
    int digit_count[NUMS_OF_DECIMAL] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
      digit = n % NUMS_OF_DECIMAL;
      digit_count[digit]++;
      n /= NUMS_OF_DECIMAL;
    }

    printf("Digit:      ");
    for (digit  = 0; digit < NUMS_OF_DECIMAL; digit++)
      printf("%3d", digit);
    printf("\nOccurences: ");
    for (digit = 0; digit < NUMS_OF_DECIMAL; digit++)
      printf("%3d", digit_count[digit]);
    printf("\n");

    return 0;
  }

