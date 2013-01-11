/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects02.c (Chapter 8, page 178) */
/* Checks numbers for repeated digits */

#include <stdio.h>

#define TEN 10

int main(void)
  {
    int digit_count[TEN] = { 0 };
    int digit;
    long n;
  
    printf("Enter a number: ");
    scanf("%ld", &n);
  
    while (n > 0) {
      digit = n % TEN;
      digit_count[digit]++;
      n /= TEN;
    }

    printf("Digit:      "); 
    for (digit  = 0; digit < TEN; digit++) {
      printf("%3d", digit); 
    }
    printf("\nOccurences: ");
    for (digit = 0; digit < TEN; digit++) {
      printf("%3d", digit_count[digit]); 
    }
    printf("\n");
  
    return 0;
  }

