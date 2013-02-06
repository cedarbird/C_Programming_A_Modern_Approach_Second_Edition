/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects08.c (Chapter 02, page 35) */
/* Calculates the remaining balance on a loan
   after the first, second, third monthly payments */

#include <stdio.h>

int main(void)
{
  float amount, interest_rate, monthly_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  amount = amount + amount * interest_rate / 100.0f / 12  - monthly_payment;
  printf("Balance remaining after first payment: $%.2f\n", amount);

  amount = amount + amount * interest_rate / 100.0f / 12  - monthly_payment;
  printf("Balance remaining after second payment: $%.2f\n", amount);

  amount = amount + amount * interest_rate / 100.0f / 12  - monthly_payment;
  printf("Balance remaining after third payment: $%.2f\n", amount);

  return 0;
}

