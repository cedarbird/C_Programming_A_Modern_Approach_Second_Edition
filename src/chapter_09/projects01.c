/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects.c (Chapter 09, page 216) */
/* recursive version sort array */

#include <stdio.h>

#define N 4

void selection_sort(int [], int);

int main(void)
  {
    int i, a[N];
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
      scanf("%d", &a[i]);

    selection_sort(a, N);

    printf("the ordered number is ");
    for (i = 0; i < 4; i++)
      printf("%d ", a[i]);
    printf("\n");

    return 0;
  }

void selection_sort(int a[], int n)
  {
    int i, swap;
    if (n == 0)
     return;
    else {
      for (i = 0; i < n - 1; i++)
        if (a[i] > a[n - 1]) {
          swap = a[n - 1];
          a[n - 1] = a[i];
          a[i] = swap;
        }
      selection_sort(a, n - 1);
    }
  }

