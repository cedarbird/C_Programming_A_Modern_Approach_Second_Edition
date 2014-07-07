/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects09.c (Chapter 06, page 123) */
/* Calculates the remaining balance on a loan after each of the payments */


#include <stdio.h>

int main(void)
{
  float amount, interest_rate, monthly_payment;
  int i, num;

  printf("Enter a amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  printf("Enter the number of payments: ");
  scanf("%d", &num);

  for(i = 0; i < num; i++) {
    amount = amount + amount * interest_rate / 100.0f / 12  - monthly_payment;
    printf("Balance remaining after %d payment: $%.2f\n", i + 1, amount);
  }

  return 0;
}

