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
#include <stdbool.h>

#define MAXDAYS_OF_YEAR 366
#define MAXDAYS_OF_MONTH 31

int main(void)
{
  int day, month, year,
      earliest_day = 0, earliest_month = 0, earliest_year = 0,
      weighing, earliest_weighing = 0;
  bool initialized = false;

  for(;;) {
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &day, &month, &year);
    weighing = year * (MAXDAYS_OF_YEAR + 1) + month * (MAXDAYS_OF_MONTH + 1) + day;
    if (weighing == 0)
      break;

    if (!initialized || weighing < earliest_weighing) {
      earliest_weighing = weighing;
      earliest_day = day;
      earliest_month = month;
      earliest_year = year;
      if (!initialized)
        initialized = true;
    }
  }

  if (earliest_weighing > 0)
    printf("%.2d/%.2d/%.2d is earliest date.\n", earliest_month, earliest_day, earliest_year);
  else
    printf("Valid date was not enterd!\n");

  return 0;
}

