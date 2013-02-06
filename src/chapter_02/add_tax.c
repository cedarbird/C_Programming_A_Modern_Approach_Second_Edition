/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* add_tax.c (Chapter 02, page 34) */

#include <stdio.h>
#define TAXRATE 0.05f

int main(void)
{

  float amount, amount_with_tax;

  printf("Enter an amount: ");
  scanf("%f", &amount);

  amount_with_tax = amount * (1 + TAXRATE);
  printf("With tax added: $%.2f\n", amount_with_tax);

  return 0;
}

