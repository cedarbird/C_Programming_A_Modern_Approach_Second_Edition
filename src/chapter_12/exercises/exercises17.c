/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises17.c (Chapter 12, page 275) */

#include <stdio.h>

int sum_two_dimentional_array(int *a, int n)
{
  int sum = 0, *p;

  for (p = a; p < a + n; p++)
    sum += *p;

  return sum;
}

int main(void)
{
  int a[][2] = {{1, 2}, {3, 8}};
  int b[][3] = {{1, 2, 3}, {3, 8}, {2, 2, 2}};

  printf("sum: %d\n", sum_two_dimentional_array(&a[0][0], 4));
  printf("sum: %d\n", sum_two_dimentional_array(&b[0][0], 9));

  return 0;
}

