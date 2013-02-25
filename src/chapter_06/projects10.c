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

#define MAXDAYS_OF_YEAR 366
#define MAXDAYS_OF_MONTH 31

int main(void)
{
  int day, month, year, min_day, min_month, min_year,
      weighing, min_weighing;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d /%d /%d", &min_day, &min_month, &min_year);
  /* Computes weighing of date */
  min_weighing = min_year * (MAXDAYS_OF_YEAR + 1)
               + min_month * (MAXDAYS_OF_MONTH + 1)
               + min_day;

  while (weighing > 0) {
    weighing = year * (MAXDAYS_OF_YEAR + 1) + month * (MAXDAYS_OF_MONTH + 1) + day;
    if (weighing < min_weighing) {
      min_weighing = weighing;
      min_day = day;
      min_month = month;
      min_year = year;
    }

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &day, &month, &year);
  }

  printf("%.2d/%.2d/%.2d is earliest date.\n", min_month, min_day, min_year);

  return 0;
}

