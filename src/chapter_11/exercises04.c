/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises04.c (Chapter 11, page 255) */
#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
  int a = 2, b = 3;
  swap(&a, &b);
  printf("a: %d, b: %d\n", a, b);

  return 0;
}

void swap(int *p, int *q)
{
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

