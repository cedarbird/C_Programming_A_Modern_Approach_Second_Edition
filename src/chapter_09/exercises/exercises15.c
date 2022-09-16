/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises15.c (Chapter 09, page 216) */
/* Gets median of 3 number using XOR */

#include <stdio.h>

double median(double, double, double);

int main(void)
{
  double x, y, z;
  printf("Enter three numbers: ");
  scanf("%lf%lf%lf", &x, &y, &z);

  printf("the median of %.2f %.2f %.2f is %.2f\n", x, y, z, median(x, y, z));

  return 0;
}

double median(double x, double y, double z)
{
  double result;

  if ((x > y) ^ (x > z))
    result = x;
  else if ((y < x) ^ (y < z))
    result = y;
  else
    result = z;

  return result;
}

