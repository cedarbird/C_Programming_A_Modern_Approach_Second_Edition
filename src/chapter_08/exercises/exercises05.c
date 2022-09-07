/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises05.c (Chapter 08, page 177) */
/* Fills Fibonacci Number Array */

#include <stdio.h>
#define N 40

int main(void)
{
  int i, fibonacci[N] = { 0, 1 };

  printf("Fibonacci Number(end to %d):\n", N);

  /* Fills fibonacci number */
  for (i = 2; i < N; i++)
    fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];

  /* Prints result */
  for (i = 0; i < N; i++)
    printf("%10d%10d\n", i + 1, fibonacci[i]);

  return 0;
}

