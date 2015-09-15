/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects06.c (Chapter 02, page 34) */
/* Computes the value of the following polynomial using Horner's Rule */
/* 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 */

#include <stdio.h>

int main(void)
{
  int x;

  printf("Enter the value of x: ");
  scanf("%d", &x);

  printf("The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: %d\n",
    ((((3 * x + 2) * x - 5) * x  - 1)  * x + 7) * x - 6);

  return 0;
}

