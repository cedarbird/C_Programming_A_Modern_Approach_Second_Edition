/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* calculate_balance.c (Chapter 2, page 35) */

#include <stdio.h>
#define NUM 3

int main(void)
{
  float amount, interest_rate, monthly_payment;
  int i;
  char* digit[] = {"first", "second", "third"};

  printf("Enter a amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  for(i = 0; i < NUM; i++) {

    amount = amount + amount * interest_rate / 100.0f / 12  - monthly_payment;
    printf("Balance remaining after %s payment: $%.2f\n", digit[i], amount);
  } 

  return 0;
}

