/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects03.c (Chapter 11, page 256) */
/* Calculates Lowest Terms by Euclid's alorithm */

#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator);

int main(void)
{
  int numerator, denominator, reduced_numerator, reduced_denominator;

  printf("Enter a fraction: ");
  scanf("%d /%d", &numerator, &denominator);

  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

  printf("In lowest Terms: %d/%d\n", reduced_numerator, reduced_denominator);

  return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator)
{
  int remainder, m, n;
  m = numerator;
  n = denominator;

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  *reduced_numerator = numerator / m;
  *reduced_denominator = denominator / m;
}

