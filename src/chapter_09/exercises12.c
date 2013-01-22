/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises12.c (Chapter 09, page 215) */
/* inner product */

#include <stdio.h>
#include <ctype.h>

double inner_product(double a[], double b[], int n)
  {
    double inner_product = 0.0;
    int i;

    for (i = 0; i < n; i++)
      inner_product += a[i] * b[i];

    return inner_product;
  }

int main(void)
  {
    printf("%.2f\n", inner_product((double []){10.0, 11.0, 2.0}, (double []){1.0, 2.0, 3.0}, 3));

    return 0;
  }

