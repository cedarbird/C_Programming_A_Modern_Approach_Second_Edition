/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises05.c (Chapter 16, page 408) */
#include <stdio.h>

struct date {
  int year;
  int month;
  int day;
};

int day_of_year(struct date d);

int main(void)
{
  printf("%d\n", day_of_year((struct date){2014, 3, 1}));

  return 0;
}

int day_of_year(struct date d)
{
  int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int day_count = 0, i;

  for (i = 1; i < d.month; i++)
    day_count += num_days[i-1];

  /* adjust for leap years */
  if ((d.year % 4 == 0 && (d.year % 100 != 0 || d.year % 400 == 0))
     && d.month > 2)
    day_count++;

  return day_count + d.day;
}

