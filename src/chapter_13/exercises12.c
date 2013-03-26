/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises12.c (Chapter 12, page 274) */

#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest,
                      int *second_largest);

int main(void)
{
  int largest, second_largest;
  find_two_largest((int []) {4, 6, 9, 3, 12}, 5, &largest, &second_largest);
  printf("largest: %d, second_largest: %d\n", largest, second_largest);

  return 0;
}

void find_two_largest(const int *a, int n, int *largest,
                      int *second_largest)
{
  const int *p = a;

  if (*p > *(p + 1)) {
    *largest = *p;
    *second_largest = *(p + 1);
  } else {
    *largest = *(p + 1);
    *second_largest = *p;
  }

  for ( p = p + 2; p < a + n; p++)
    if (*p > *largest) {
      *second_largest = *largest;
      *largest = *p;
    } else if (*p > *second_largest)
      *second_largest = *p;
}

