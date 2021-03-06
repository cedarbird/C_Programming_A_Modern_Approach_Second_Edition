/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises08.c (Chapter 12, page 274) */

#include <stdio.h>

void store_zeros(int a[], int n)
{
  int *p = a;

  while (p < a + n)
    *p++ = 0;
}

int main(void)
{
  int a[10];

  store_zeros(a, 10);

  for (int i = 0; i < 10; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}

