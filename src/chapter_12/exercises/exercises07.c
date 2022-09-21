/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises07.c (Chapter 12, page 274) */

#include <stdio.h>
#include <stdbool.h> /* C99 Only */

bool search(const int a[], int n, int key)
{
  const int *p = a;

  while (p < a + n)
    if (key == *p++)
      return true;

  return false;
}

int main(void)
{
  printf("%d\n", search((int []) {1, 2, 3, 4}, 4, 4));
  printf("%d\n", search((int []) {1, 2, 3, 4}, 4, 5));

  return 0;
}

