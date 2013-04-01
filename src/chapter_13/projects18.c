/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects18.c (Chapter 13, page 313) */
/* Displays date in [month dd, yyyy] format */

#include <stdio.h>

int main(void)
{
  int month, day, year;
  char *month_names[] = {
                         "January",
                         "February",
                         "March",
                         "April",
                         "May",
                         "June",
                         "July",
                         "August",
                         "September",
                         "October",
                         "November",
                         "December"
                        };

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d /%d /%d", &month, &day, &year);

  printf("You entered the date %s %d, %d\n",
         *(month_names + month - 1), day, year);

  return 0;
}

