/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises04.c (Chapter 09, page 214) */
/* Computes day of year */

#include <stdio.h>

int day_of_year(int month, int day, int year)
{
  int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int day_count = 0, i;

  for (i = 1; i < month; i++)
    day_count += num_days[i-1];

  /* adjust for leap years */
  if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) && month > 2)
    day_count++;

  return day_count + day;
}

int main(void)
{
  printf("%d\n", day_of_year(12, 28, 2013));
  printf("%d\n", day_of_year(12, 28, 2012));
  printf("%d\n", day_of_year(12, 28, 2000));
  printf("%d\n", day_of_year(12, 28, 1900));
  printf("%d\n", day_of_year(3, 1, 2000));
  printf("%d\n", day_of_year(3, 1, 1900));

  return 0;
}

