/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects10.c (Chapter 06, page 124) */
/* Indicates which date comes earliest on the calendar */

#include <stdio.h>

int main(void)
{
  int day, month, year, earliest_day, earliest_month, earliest_year;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d /%d /%d", &month, &day, &year);
  earliest_month = month;
  earliest_day   = day;
  earliest_year  = year;

  while (!(month == 0 && day == 0 && year == 0)) {

    if (   (year < earliest_year)
        || (year == earliest_year && month < earliest_month)
        || (year == earliest_year && month == earliest_month && day < earliest_day)) {
      earliest_month = month;
      earliest_day   = day;
      earliest_year  = year;
    }
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month, &day, &year);
  }

  if (earliest_month == 0 && earliest_day == 0 && earliest_year == 0)
    printf("Valid date was not enterd!\n");
  else
    printf("%.2d/%.2d/%.2d is earliest date.\n",
              earliest_month, earliest_day, earliest_year);

  return 0;
}

