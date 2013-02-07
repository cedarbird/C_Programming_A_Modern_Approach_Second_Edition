/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* productinfo.c (Chapter 03, page 50) */
/* Prints a pruduct information */

#include <stdio.h>

int main(void)
{
  int year, month, day;
  int item_number;
  float unit_price;

  printf("Enter item number:  ");
  scanf("%d", &item_number);
  printf("Enter unit price:  ");
  scanf("%f", &unit_price);
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%-.2d/%-.2d/%-.4d\n", item_number, unit_price, month, day, year);

  return 0;
}

