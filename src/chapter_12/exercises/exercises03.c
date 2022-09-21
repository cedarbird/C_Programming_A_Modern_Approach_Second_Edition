/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises03.c (Chapter 12, page 273) */

#include <stdio.h>

#define N 10

int main(void)
{
  int a[N] = {1, 2 ,3 ,4, 5, 6, 7, 8, 9, 10};
  int *p = &a[0], *q = &a[N-1], temp;

  while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
  }

  p = a;
  while (p < (a + N))
    printf("%d ", *p++);
  printf("\n");

  return 0;
}

