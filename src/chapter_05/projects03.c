/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects03.c (Chapter 05, page 96) */
/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
  float commission, rival_commission, price, value;
  int share;

  printf("Enter number of shares and price per share: ");
  scanf("%d%f", &share, &price);

  value = share * price;

  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;

 if (share < 2000)
   rival_commission = 33.00f + 0.03f * share;
 else
   rival_commission = 33.00f + 0.02f * share;

  printf("Original's commission: $%.2f\n", commission);
  printf("Rival's commission: $%.2f\n", rival_commission);

  return 0;
}

