/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises09.c (Chapter 09, page 215) */
/* Checks function's output(no any change because of passing by value in c language) */

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
  int i = 1, j = 2;
  swap(i, j);
  printf("i = %d, j = %d\n", i, j);

  return 0;
}

void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}

