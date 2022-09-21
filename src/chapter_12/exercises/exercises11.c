/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises11.c (Chapter 12, page 274) */

#include <stdio.h>

int find_largest(int a[], int n)
{
  int *p = a, max = *p;

  while (p < a + n) {
    if (*p > max)
      max = *p;
    p++;
  }

  return max;
}

int main(void)
{
  printf("max: %d\n", find_largest((int []) {1, 2, 3, 8, 5}, 5));

  return 0;
}

