/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises03.c (Chapter 09, page 214) */
/* Computes GCD with Euclid's algorithm */

#include <stdio.h>

int gcd(int m, int n)
{
  int remainder;

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  return m;
}

int main(void)
{
  int x, y;
  printf("Enter two integers: ");
  scanf("%d%d", &x, &y);
  printf("The gcd of (%d %d) is %d\n", x, y, gcd(x, y));

  return 0;
}

