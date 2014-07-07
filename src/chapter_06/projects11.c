/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects11.c (Chapter 06, page 124) */
/* Computes the value of the mathematical constant e
   by function : e = 1 + 1/1! + 1/2! + ... + 1/n! */

#include <stdio.h>

int main(void)
{
  int n;
  float e = 1.0f, a = 1.0f;

  printf("Enter a number: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    e += 1.0f / (a *= i);
  printf("the e is %.f.\n", e);

  return 0;
}

