/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* pay.c (Chapter 02, page 34) */

#include <stdio.h>
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

int main(void)
{

  int bill_list[] = { TWENTY, TEN, FIVE, ONE };
  int amount, i, num, len = sizeof(bill_list) / sizeof(int);

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  for(i = 0; i < len; i++) {

    num = amount / bill_list[i];
    printf("$%2d bills: %d\n", bill_list[i], num);
    amount = amount - num * bill_list[i];
  } 

  return 0;
}

