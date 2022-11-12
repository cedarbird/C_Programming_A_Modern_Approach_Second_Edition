/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises16.c (Chapter 17, page 455) */

#include <stdio.h>
#include <stdlib.h>

int sum(int (*f)(int), int start, int end);
int g(int n);


int main(void)
{
  printf("sum is: %d.\n", sum(g, 2, 4));

  return 0;
}

int g(int n)
{
  printf("g(%d) is called.\n", n);
  return n*2;
}

int sum(int (*f)(int), int start, int end)
{
  int sum = 0;
  for (int i = start; i <=end; i++)
    sum += f(i);
  return sum;
}
