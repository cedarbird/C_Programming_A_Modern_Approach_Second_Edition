/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects01.c (Chapter 08, page 178) */
/* print numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

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

    printf("Repeated digit(s): ");
    for (digit  = 0; digit < NUMS_OF_DECIMAL; digit++)
      if(digit_count[digit] > 1)
        printf("%3d", digit);
    printf("\n");

    return 0;
  }

