/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* show_ealiestday.c (Chapter 06, page 124) */

#include <stdio.h>

int main(void)
  {
    long day, month, year;
    long eday, emonth, eyear;
    long date, edate;
   
    printf("Enter date (mm/dd/yy): ");
    scanf("%ld/%ld/%ld", &day, &month, &year);
    eday = day;
    emonth = month;
    eyear = year;
    edate = eyear * 10000 + emonth * 100 + eday;

    while(1) {
      printf("Enter date (mm/dd/yy): ");
      scanf("%ld/%ld/%ld", &day, &month, &year);
      if (day == 0 && month == 0 && year == 0) {
        break;
      }
      date = year * 10000 + month * 100 + day;
      if (date < edate) {
        edate = date;
        eday = day;
        emonth = month;
        eyear = year;
      }
    }

    printf("%ld/%ld/%ld is the earliest day.\n", emonth, eday, eyear);     

    return 0;
  }

