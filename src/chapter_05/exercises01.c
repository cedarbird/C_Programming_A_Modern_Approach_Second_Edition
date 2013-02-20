/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises01.c (Chapter 05, page 93) */

#include <stdio.h>

int main(void)
{
  int i, j, k;

  /* (a) */
  i = 2;
  j = 3;
  k = i * j == 6;
  printf("%d\n", k);

  /* (b) */
  i = 5;
  j = 10;
  k = 1;
  printf("%d\n", k > i < j);

  /* (c) */
  i = 3;
  j = 4;
  k = 1;
  printf("%d\n", i < j  == j < k);

  /* (d) */
  i = 3;
  j = 4;
  k = 5;
  printf("%d\n", i % j + i < k);

  return 0;
}

