/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects03.c (Chapter 06, page 123) */
/* Calculates Lowest Terms by Euclid's alorithm */

#include <stdio.h>

int main(void)
{
  int m, n, remainder, numerator, denominator;

  printf("Enter a fraction: ");
  scanf("%d/%d", &m, &n);
  numerator = m;
  denominator = n;

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("In lowest Terms: %d/%d\n", numerator/m, denominator/m);

  return 0;
}

