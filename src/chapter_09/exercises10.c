/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises10.c (Chapter 09, page 215) */
/* largest average positive function from a array */

#include <stdio.h>

int largest(int a[], int n)
  {
    int i, max = a[0];

    for (i = 1; i < n; i++)
      if (a[i] > max)
        max = a[i];

    return max;
  }

int average(int a[], int n)
  {
    int i, avg = 0;

    for (i = 0; i < n; i++)
      avg += a[i];

    return avg / n;
  }

int num_positive(int a[], int n)
  {
    int i, count = 0;

    for (i = 0; i < n; i++)
      if (a[i] > 0)
        count++;

    return count;
  }

int main(void)
  {
    int a[] = {1, 2, 6, -1};

    printf("%lu\n", sizeof(a)/sizeof(a[0]));
    printf("%d\n", largest(a, 4));
    printf("%d\n", average(a, 4));
    printf("%d\n", num_positive(a, 4));

    return 0;
  }

