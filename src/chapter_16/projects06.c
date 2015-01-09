/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects06.c (Chapter 16, page 412) */
/* Indicates which date comes earlier on the calendar */

#include <stdio.h>

#define MAXDAYS_OF_YEAR 365
#define MAXDAYS_OF_MONTH 31

struct date {
  int year;
  int month;
  int day;
};

int compare_dates(struct date d1, struct date d2);

int main(void)
{
  struct date date1, date2;
  int result;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d /%d /%d", &date1.month, &date1.day, &date1.year);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d /%d /%d", &date2.month, &date2.day, &date2.year);

  result = compare_dates(date1, date2);
  if (result < 0)
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n",
            date1.month, date1.day, date1.year,
            date2.month, date2.day, date2.year);
  else if (result > 0)
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n",
            date2.month, date2.day, date2.year,
            date1.month, date1.day, date1.year);
  else
    printf("%.2d/%.2d/%.2d is same as %.2d/%.2d/%.2d.\n",
            date2.month, date2.day, date2.year,
            date1.month, date1.day, date1.year);

  return 0;
}

int compare_dates(struct date date1, struct date date2)
{
  /* return subtraction for weighing of date */
  return (date1.year * (MAXDAYS_OF_YEAR) + date1.month * (MAXDAYS_OF_MONTH) + date1.day)
       - (date2.year * (MAXDAYS_OF_YEAR) + date2.month * (MAXDAYS_OF_MONTH) + date2.day);
}

