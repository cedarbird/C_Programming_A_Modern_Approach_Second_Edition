/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* reversaldigit2.c (Chapter 04, page 71) */

#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a two-digit number: ");
  scanf("%d", &n);
  printf("The reversal is: %d%d\n", n % 10, n / 10);

  return 0;
}

