/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects02.c (Chapter 04, page 71) */
/* Reverses three-digit number */

#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a three-digit number: ");
  scanf("%d", &n);
  printf("The reversal is: %d%d%d\n", n % 10, (n / 10) % 10, n / 100);

  return 0;
}

