/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises06.c (Chapter 12, page 273) */

#include <stdio.h>

int sum_array(const int a[], int n)
{
  int sum = 0;
  const int *p = a;

  while (p < a + n)
    sum += *p++;

  return sum;
}

int main(void)
{
  printf("%d\n", sum_array((int []) {1, 2, 3, 4}, 4));
  return 0;
}

