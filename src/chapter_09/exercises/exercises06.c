/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises06.c (Chapter 09, page 214) */
/* Gets k^th digit */

#include <stdio.h>

int digit(int n, int k)
  {
    int i;

    for (i = 1; i < k; i++)
      n /= 10;

    return n % 10;
  }

int main(void)
  {
    printf("%d\n", digit(905, 3));
    printf("%d\n", digit(1, 1));
    printf("%d\n", digit(1, 2));

    return 0;
  }

