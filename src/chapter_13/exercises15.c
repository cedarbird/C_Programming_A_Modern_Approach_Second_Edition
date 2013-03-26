/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises15.c (Chapter 12, page 275) */

#include <stdio.h>

#define N 10

int main(void)
{
  int *p;
  int temperatures[7][24] = {[3][1] = 1, [3][2] = 2, [3][20] = 10};
  int i = 3;

  for (p = temperatures[i]; p < temperatures[i] + 24; p++)
    printf("%d ", *p);

  return 0;
}

