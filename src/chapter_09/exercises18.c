/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises18.c (Chapter 09, page 216) */
/* Computes GCD with Euclid's algorithm */
/* recursive version */

#include <stdio.h>

int gcd(int, int);

int main(void)
{
  int x, y;
  printf("Enter two integers: ");
  scanf("%d%d", &x, &y);
  printf("the gcd of (%d %d) is %d\n", x, y, gcd(x, y));

  return 0;
}

int gcd(int m, int n)
{
  return (n == 0) ? m : gcd(n, m % n);
}

