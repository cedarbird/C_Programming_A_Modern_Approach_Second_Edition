/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises06.c (Chapter 11, page 255) */

#include <stdio.h>

void find_two_largest(int a[], int n, int *largest,
                      int *second_largest);

int main(void)
{
  int largest, second_largest;
  find_two_largest((int []) {12, 7, 4, 6, 9, 3}, 6, &largest, &second_largest);
  printf("largest: %d, second_largest: %d\n", largest, second_largest);

  return 0;
}

void find_two_largest(int a[], int n, int *largest,
                      int *second_largest)
{
  int i;

  if (a[0] > a[1]) {
    *largest = a[0];
    *second_largest = a[1];
  } else {
    *largest = a[1];
    *second_largest = a[0];
  }

  for (i = 2; i < n; i++)
    if (a[i] > *largest) {
      *second_largest = *largest;
      *largest = a[i];
    } else if (a[i] > *second_largest)
      *second_largest = a[i];
}

