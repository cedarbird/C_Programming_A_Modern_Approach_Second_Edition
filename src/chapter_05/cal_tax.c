/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* cal_tax.c (Chapter 05, page 96) */

#include <stdio.h>

int main(void)
{
  float income, tax;

  printf("Enter the amount of taxable income: ");
  scanf("%f", &income);

  if (income <= 750.0f)
    tax = income / 100.0f;
  else if (income <= 2250.0f)
    tax = 7.5f + (income - 750.0f) * 2.0f / 100.0f;
  else if (income <= 3750.0f)
    tax = 37.5f + (income - 2250.0f) * 3.0f / 100.0f;
  else if (income < 5250.0f)
    tax = 82.5f + (income - 3750.0f) * 4.0f / 100.0f;
  else if (income < 7000.0f)
    tax = 142.5f + (income - 5250.0f) * 5.0f / 100.0f;
  else
    tax = 230.0f + (income - 7000.0f) * 6.0f / 100.0f;

  printf("the amount of tax is : %.2f\n", tax);
  return 0;
}

