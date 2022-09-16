/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises01.c (Chapter 09, page 214) */
/* Reviews to find error */

#include <stdio.h>

/* 1. double triangle_area(double base, height) => height no type */
/* 2. double product; => out of block */
double triangle_area(double base, double height)
{
  double product;
  product = base * height;
  return product / 2;
}

int main(void)
{
  printf("%.2f\n", triangle_area(10.0, 10.0));
  return 0;
}

