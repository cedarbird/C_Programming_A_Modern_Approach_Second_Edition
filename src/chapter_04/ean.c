/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* upc2.c (Chapter 4, page 71) */

#include <stdio.h>

int main(void)
{
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
  int check_digit;

  printf("Enter the first 12 digits of a EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

  check_digit = 9 - (((d1 + d3 + d5 + d7 + d9 + d11) + 3 * (d2 + d4 + d6 +d8 + d10 + d12) - 1) % 10); 

  printf("Check digit: %d\n", check_digit);
  return 0;
}

