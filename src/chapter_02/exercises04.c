/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises04.c (Chapter 02, page 33) */
/* Here's one possible program: */
/* Warning: it's wrong to use uninitialized variable */
/*
 *  When compiled using GCC and then executed, this program produced the following output:
 *
 *  Value of i: 5618848
 *  Value of j: 0
 *  Value of k: 6844404
 *  Value of x: 3.98979e-34
 *  Value of y: 9.59105e-39
 *  Value of z: 9.59105e-39
 *
 *  The values printed depend on many factors, so the chance that you'll get exactly these numbers is small.
 */

#include <stdio.h>

int main(void)
{
  int i, j, k;
  float x, y, z;

  printf("Value of i: %d\n", i);
  printf("Value of j: %d\n", j);
  printf("Value of k: %d\n", k);

  printf("Value of x: %g\n", x);
  printf("Value of y: %g\n", y);
  printf("Value of z: %g\n", z);

  return 0;
}

