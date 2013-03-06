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
  double x, y = 1.0, square_root;

  printf("Enter a positive number: ");
  scanf("%lf", &x);

  for (;;) {
    square_root = (y + (x / y)) / 2.0;
    if (fabs(square_root - y) <= DIFF)
      break;
    else
      y = square_root;
  }

  printf("The square x is %.10f\n", square_root);

  return 0;
}

