/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects05.c (Chapter 06, page 123) */
/* Reverses integer entered by user */

#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a nonnegative number: ");
  scanf("%d", &n);

  printf("The reversal is: ");
  do {
    printf("%d", n % 10);
    n /= 10;
  } while (n > 0);
  printf("\n");

  return 0;
}

