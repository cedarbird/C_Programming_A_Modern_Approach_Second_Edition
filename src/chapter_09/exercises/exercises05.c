/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises05.c (Chapter 09, page 214) */
/* Computes numbers of digit */

#include <stdio.h>

int nums_digit(int n)
{
  int num = 0;

  while (n > 0) {
    n /= 10;
    num++;
  }

  return num;
}

int main(void)
{
  printf("%d\n", nums_digit(905));
  printf("%d\n", nums_digit(4));

  return 0;
}

