/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects12.c (Chapter 06, page 124) */
/* Computes the value of the mathematical constant e
   by function : e = 1 + 1/1! + 1/2! + ... + 1/n!
   When current term becomes less than precision, The Program stop. */

#include <stdio.h>

int main(void)
{
  float e = 1.0f, a = 1.0f, precision;

  printf("Enter precision: ");
  scanf("%f", &precision);
  for (int i = 2; precision <= 1.0f / a; i++) {
    e += 1.0f / a;
    a *= i;
  }
  printf("the e is %f.\n", e);

  return 0;
}

