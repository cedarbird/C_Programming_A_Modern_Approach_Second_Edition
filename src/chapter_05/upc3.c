/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K.N.King                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* upc3.c (Chapter 5, page 96) */

#include <stdio.h>

int main(void)
{
  int check_digit, d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;

  printf("Enter the first (single) digit: ");
  scanf("%1d", &d);
  printf("Enter first group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Enter second group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  printf("Enter the last (single) digit: ");
  scanf("%1d", &check_digit);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  if (check_digit == 9 - ((total - 1) % 10))
    printf("VALID\n");
  else
    printf("NOT VALID\n");

  return 0;
}

