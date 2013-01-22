/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises17.c (Chapter 09, page 215) */
/* no recursive fact function */

#include <stdio.h>

int fact(int);

int main(void)
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("the factorial of %d is %d\n", n, fact(n));

  return 0;
}

int fact(int n)
{
  int i, result = 1;

  for (i = 2; i <= n; i++)
    result *= i;

  return result;
}

