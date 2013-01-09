/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* show_calendar.c (Chapter 6, page 123) */

#include <stdio.h>

int main(void)
{
  int days, startday;

  printf("Enter number of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &startday);

  for (int i = 1; i < startday; i++)
    printf("   ");

  for (int i = 1; i <= days; i++) {
    printf("%3d", i);
    if ((i + startday - 1) % 7 == 0)
      printf("\n");
  }
  printf("\n");

  return 0;
}

