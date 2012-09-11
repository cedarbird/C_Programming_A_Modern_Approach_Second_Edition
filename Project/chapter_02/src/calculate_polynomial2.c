/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* calculate_polynomial2.c (Chapter 2, page 34) */
/* Horner's Rule */

#include <stdio.h>

int main(void)
{
  int x;
  printf("Enter a x values:");
  scanf("%d", &x);
  printf("The polynomial 3x^5+2x^4-5x^3-x^2+7x-6: %d\n", (((((3 * x + 2) * x - 5) * x  - 1)  * x + 7) * x -6));

  return 0;
}

