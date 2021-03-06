/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises03.c (Chapter 06, page 121) */

#include <stdio.h>

int main(void)
{
  for (int i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);

  return 0;
}

