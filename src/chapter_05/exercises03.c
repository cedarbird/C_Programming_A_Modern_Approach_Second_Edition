/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises03.c (Chapter 05, page 94) */
/* Shows short-circuit behavior of logical expressions */

#include <stdio.h>

int main(void)
{
  int i, j, k;

  /* (a) */
  i = 3;
  j = 4;
  k = 5;
  printf("%d ", i < j || ++j < k);
  printf("%d %d %d\n", i, j, k);

  /* (b) */
  i = 7;
  j = 8;
  k = 9;
  printf("%d ", i - 7 && j++ < k);
  printf("%d %d %d\n", i, j, k);

  /* (c) */
  i = 7;
  j = 8;
  k = 9;
  printf("%d ", (i = j) || (j = k));
  printf("%d %d %d\n", i, j, k);

  /* (d) */
  i = 1;
  j = 1;
  k = 1;
  printf("%d ", ++i || ++j && ++k);
  printf("%d %d %d\n", i, j, k);

  return 0;
}

