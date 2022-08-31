/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects06.c (Chapter 06, page 123) */
/* Calculates even squares between 1 and n */

#include <stdio.h>

int main(void)
{
  int i, n;

  printf("Enter limit on maximum square: ");
  scanf("%d", &n);

  for (i = 2; i * i <= n; i += 2)
    printf("%d\n", i * i);

  return 0;
}

