/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects07.c (Chapter 09, page 217) */
/* Computes power (shorten number of recursive calls) */

#include <stdio.h>

int power(int x, int n);

int main(void)
{
  int x, n;
  printf("Enter two numbers x and n: ");
  scanf("%d%d", &x, &n);
  printf("the %d^%d: %d\n", x, n, power(x, n));

  return 0;
}

int power(int x, int n)
{
  return n == 0 ? 1 : (n % 2 == 0 ? power(x * x, n / 2)
                                  : x * power(x * x, n / 2));
}

