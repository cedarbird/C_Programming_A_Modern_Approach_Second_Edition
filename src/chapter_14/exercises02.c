/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises02.c (Chapter 14, page 345) */

#include <stdio.h>

#define NELEMS(a) ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
  int a[] = {0, 1, 2};
  printf("{0, 1, 2} size: %d\n", NELEMS(a));

  return 0;
}

