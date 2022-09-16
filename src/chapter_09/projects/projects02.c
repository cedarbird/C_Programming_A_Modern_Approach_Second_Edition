/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects02.c (Chapter 09, page 217) */
/* Computes the amount of income tax */

#include <stdio.h>

float tax(float income);

int main(void)
{
  float income;

  printf("Enter the amount of taxable income: ");
  scanf("%f", &income);

  printf("the amount of tax is : %.2f\n", tax(income));

  return 0;
}

float tax(float income)
{
  if (income <= 750.0f)
    return income / 100.0f;
  else if (income <= 2250.0f)
    return 7.5f + (income - 750.0f) * 2.0f / 100.0f;
  else if (income <= 3750.0f)
    return 37.5f + (income - 2250.0f) * 3.0f / 100.0f;
  else if (income < 5250.0f)
    return  82.5f + (income - 3750.0f) * 4.0f / 100.0f;
  else if (income < 7000.0f)
    return 142.5f + (income - 5250.0f) * 5.0f / 100.0f;
  else
    return 230.0f + (income - 7000.0f) * 6.0f / 100.0f;
}

