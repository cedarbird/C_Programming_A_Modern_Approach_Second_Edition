/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects08.c (Chapter 07, page 158) */
/* Displays the departure and arrival time for the flght whose departue time
   is closest to that entered bu the user */

#include <stdio.h>

int main(void)
{
  int hours, minutes, minutes_from_midnight;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  minutes_from_midnight = hours * 60 + minutes;

  if (minutes_from_midnight < 8 * 60 || minutes_from_midnight >= 21 * 60 + 45)
    printf("Closest departure time is 9:45 PM, arriving at 11:58 PM.\n");
  else if (minutes_from_midnight < 9 * 60 + 43)
    printf("Closest departure time is 8:00 AM, arriving at 10:16 AM.\n");
  else if (minutes_from_midnight < 11 * 60 + 19)
    printf("Closest departure time is 9:43 AM, arriving at 11:52 AM.\n");
  else if (minutes_from_midnight < 12 * 60 + 47)
    printf("Closest departure time is 11:19 AM, arriving at 1:31 PM.\n");
  else if (minutes_from_midnight < 14 * 60)
    printf("Closest departure time is 12:47 PM, arriving at 3:00 PM.\n");
  else if (minutes_from_midnight < 15 * 60 + 45)
    printf("Closest departure time is 2:00 PM, arriving at 4:08 PM.\n");
  else if (minutes_from_midnight < 19 * 60)
    printf("Closest departure time is 3:45 PM, arriving at 5:55 PM.\n");
  else
    printf("Closest departure time is 7:00 PM, arriving at 9:20 PM.\n");

  return 0;
}

