/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K.N.King                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* squre.c (Chapter 6, page 123) */

#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);
  for (int i = 2; i * i <= n; i += 2)
    printf("%d\n", i * i);

  return 0;
}
