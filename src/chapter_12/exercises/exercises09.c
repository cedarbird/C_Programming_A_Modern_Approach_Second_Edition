/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises09.c (Chapter 12, page 274) */

#include <stdio.h>

double inner_product(const double *a, const double *b, int n)
{
  double product = 0.0;
  const double *pa = a, *pb = b;

  while (pa < a + n)
    product += (*pa++) * (*pb++);

  return product;
}

int main(void)
{
  printf("inner product: %f\n", inner_product((double []) {1.0, 2.0, 3.0},
                                              (double []) {1.0, 2.0, 3.0}, 3));

  return 0;
}

