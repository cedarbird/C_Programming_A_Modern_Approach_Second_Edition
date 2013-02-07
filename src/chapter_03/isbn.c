/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* isbn.c (Chapter 3, page 50) */
/* Prints isbn */

#include <stdio.h>

int main(void)
{
  int gs1_prefix, group_id, publisher_code, item_number, check_digit;

  printf("Enter ISBN:  ");
  scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &publisher_code, &item_number, &check_digit);
  
  printf("GS1 prefix: %d\n", gs1_prefix);
  printf("Group identifier: %d\n", group_id);
  printf("Publisher code: %d\n", publisher_code);
  printf("Item number: %d\n", item_number);
  printf("Check digit: %d\n", check_digit);

  return 0;
}

