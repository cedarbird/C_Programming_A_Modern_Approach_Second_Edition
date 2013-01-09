/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* sum.c (Chapter 7, page 157) */

#include <stdio.h>

int main(void)
  {
    double n, sum = 0.0;

    printf("This program sums a series of doubles.\n");
    printf("Enter doubles (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0) {
      sum += n;
      scanf("%lf", &n);
    }
    printf("The sum is: %f\n", sum);

    return 0;
  }

