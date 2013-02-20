/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises12.c (Chapter 04, page 70) */

#include <stdio.h>

int main(void)
{
  int i, j;
  i = 5;
  j = ++i * 3 - 2;
  printf("%d %d\n", i, j);

  i = 5;
  j = 3 - 2 * i++;
  printf("%d %d\n", i, j);

  i = 7;
  j = 3 * i-- + 2;
  printf("%d %d\n", i, j);

  i = 7;
  j = 3 + --i * 2;
  printf("%d %d\n", i, j);

  return 0;
}

