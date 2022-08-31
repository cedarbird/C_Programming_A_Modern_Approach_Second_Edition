/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises11.c (Chapter 06, page 121) */

#include <stdio.h>

int main(void)
{
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    if (i % 2)
      continue;
    sum += i;
  }
  printf("%d\n", sum);

  return 0;
}

