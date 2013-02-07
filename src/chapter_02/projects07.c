/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects07.c (Chapter 02, page 34) */
/* Pays amount using the smallest number of $20,$10,$5,$1 */

#include <stdio.h>

int main(void)
  {
    int amount, product;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    product = amount / 20;
    printf("$20 bills: %d\n", product);
    amount = amount - product * 20;

    product = amount / 10;
    printf("$10 bills: %d\n", product);
    amount = amount - product * 10;

    product = amount / 5;
    printf(" $5 bills: %d\n", product);
    amount = amount - product * 5;

    printf(" $1 bills: %d\n", amount);

    return 0;
  }

