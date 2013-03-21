/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises08.c (Chapter 11, page 256) */

#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
  printf("largest: %d\n", *find_largest((int []) {2, 4, 9, 3, 16}, 5));

  return 0;
}

int *find_largest(int a[], int n)
{
  int *largest, i;
  largest = &a[0];

  for (i = 1; i < n; i++)
    if (a[i] > *largest)
      largest = &a[i];

  return largest;
}

