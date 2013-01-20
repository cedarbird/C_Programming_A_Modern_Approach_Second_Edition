/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises03.c (Chapter 09, page 214) */
/* Euclid's algorithm for computing the GCD */

#include <stdio.h>

int gcd(int m, int n)
  {
    int remainder;

    while (n != 0) {
      remainder = m % n;
      m = n;
      n = remainder;
    }

    return m;
  }

int main(void)
  {
    printf("%d\n", gcd(12, 28));
    printf("%d\n", gcd(24, 9));

    return 0;
  }

