/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects14.c (Chapter 07, page 159) */
/* Uses Newton's methnod to compute
   the square x of a positive floating-point number */
/* Example: (we also let y = 1)
 *  x y       x/y     Average of y and x/y
 *  --------------------------------------
 *  3 1       3       2
 *  3 2       1.5     1.75
 *  3 1.75    1.71429 1.73214
 *  3 1.73214 1.73196 1.73205
 *  3 1.73205 1.73205 1.73205
 */

#include <stdio.h>
#include <math.h>

#define DIFF 0.00001

int main(void)
{
  double x, y = 1.0, new_y = 2.0;

  printf("Enter a positive number: ");
  scanf("%lf", &x);

  while (fabs(new_y - y) > DIFF) {
    y = new_y;
    new_y = (x / y + y) / 2.0;
  }

  printf("Square root: %lf\n", y);

  return 0;
}

