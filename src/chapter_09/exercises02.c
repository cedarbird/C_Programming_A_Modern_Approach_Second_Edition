/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises02.c (Chapter 09, page 214) */
/* Checks range */

#include <stdio.h>

int check(int x, int y, int n)
{
  return (x >= 0 && x <= n - 1) && (y >= 0 && y <= n -1);
}

int main(void)
{
  printf("%d\n", check(1, 2, 4));
  printf("%d\n", check(5, 2, 4));
  printf("%d\n", check(7, 6, 4));
  printf("%d\n", check(1, 5, 4));

  return 0;
}

