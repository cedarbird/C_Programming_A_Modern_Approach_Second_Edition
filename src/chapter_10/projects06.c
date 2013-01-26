/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects06.c (Chapter 09, page 217) */
/* Horner's Rule to calculate polynomial */

#include <stdio.h>

int polynomial(int x);

int main(void)
  {
    int x;
    printf("Enter a x values:");
    scanf("%d", &x);
    printf("The polynomial 3x^5+2x^4-5x^3-x^2+7x-6: %d\n", polynomial(x));

    return 0;
  }

int polynomial(int x)
  {
    return ((((3 * x + 2) * x - 5) * x  - 1)  * x + 7) * x - 6;
  }
