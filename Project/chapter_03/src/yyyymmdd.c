/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* tprintf.c (Chapter 3, page 50) */
/* Prints yyyymmdd */

#include <stdio.h>

int main(void)
{
  int year, month, day;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("%.4d%.2d%.2d\n", year, month, day);

  return 0;
}

