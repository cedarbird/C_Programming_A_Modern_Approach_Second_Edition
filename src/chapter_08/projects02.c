/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects02.c (Chapter 08, page 178) */
/* Shows how many times each digit appears in the number. */

#include <stdio.h>

int main(void)
{
  int digit_count[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digit_count[digit]++;
    n /= 10;
  }

  printf("Digit:      ");
  for (digit = 0; digit <= 9; digit++)
    printf("%3d", digit);
  printf("\nOccurrences:");
  for (digit = 0; digit <= 9; digit++)
    printf("%3d", digit_count[digit]);
  printf("\n");

  return 0;
}

