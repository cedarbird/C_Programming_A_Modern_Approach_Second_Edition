/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises10.c (Chapter 12, page 274) */

#include <stdio.h>

int *find_middle(int a[], int n)
{
  return a + n/2;
}

int main(void)
{
  printf("middle: %d\n", *find_middle((int []) {1, 2, 3, 4, 5}, 5));
  printf("middle: %d\n", *find_middle((int []) {2, 3, 4, 5, 6, 7}, 6));

  return 0;
}

