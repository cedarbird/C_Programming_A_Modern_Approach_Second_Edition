/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises07.c (Chapter 11, page 256) */

#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
  int day_of_year, year, month, day;
  printf("Enter day_of_year: ");
  scanf("%d", &day_of_year);
  printf("Enter year: ");
  scanf("%d", &year);
  split_date(day_of_year, year, &month, &day);
  printf("month: %d, day: %d\n", month, day);

  return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
  int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int i;

  /* adjust for leap years */
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    num_days[1] = 29;

  for (i = 0; i < 12; i++)
    if (day_of_year - num_days[i] > 0)
      day_of_year -= num_days[i];
    else
      break;

  *month = i + 1;
  *day = day_of_year;
}

