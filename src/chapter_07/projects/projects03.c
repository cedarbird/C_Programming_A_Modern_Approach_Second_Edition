/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects03.c (Chapter 07, page 157) */
/* Sums a series of numbers */

#include <stdio.h>

int main(void)
{
  double n, sum = 0.0;

  printf("This program sums a series of numbers.\n");
  printf("Enter number (0 to terminate): ");

  scanf("%lf", &n); // %f is not ok.
  while (n != 0.0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is: %f\n", sum); // %lf is also ok in c99, but meaningless.

  return 0;
}

