/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects01.c (Chapter 11, page 256) */
/* Pays amount using the smallest number of $20,$10,$5,$1 */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
  int amount, twenties, tens, fives, ones;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  pay_amount(amount, &twenties, &tens, &fives, &ones);
  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf(" $5 bills: %d\n", fives);
  printf(" $1 bills: %d\n", ones);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
  *twenties = dollars / 20;
  dollars = dollars - *twenties * 20;

  *tens = dollars / 10;
  dollars = dollars - *tens * 10;

  *fives = dollars / 5;
  dollars = dollars - *fives * 5;

  *ones = dollars;
}

