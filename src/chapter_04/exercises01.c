/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises01.c (Chapter 04, page 68) */

#include <stdio.h>

int main(void)
  {
    int i, j, k;

    i = 5;
    j = 3;

    printf("%d %d\n", i / j, i % j);

    i = 2;
    j = 3;

    printf("%d\n", (i + 10) % j);

    i = 7;
    j = 8;
    k = 9;

    printf("%d\n", (i + 10) % k / j);

    i = 1;
    j = 2;
    k = 3;

    printf("%d\n", (i + 5) % (j + 2) / k);
    return 0;
  }

