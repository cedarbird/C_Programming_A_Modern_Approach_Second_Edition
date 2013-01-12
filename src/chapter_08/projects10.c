/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects10.c (Chapter 08, page 180) */

#include <stdio.h>

#define NUMS_OF_FLIGHT

int main(void)
  {
    int hours, minutes, minutes_from_midnight;
    int departure_times[NUMS_OF_FLIGHT] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrive_times[NUMS_OF_FLIGHT] =    {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    minutes_from_midnight = hours * 60 + minutes;

    if (minutes_from_midnight < 480)
      printf("out of service time.\n");
    else if (minutes_from_midnight < 616) {
      printf("Closest departure time is 8:00 AM, arriving at 10:16 AM.\n");
    } else if (minutes_from_midnight < 712) {
      printf("Closest departure time is 9:43 AM, arriving at 11:52 AM.\n");
    } else if (minutes_from_midnight < 811) {
      printf("Closest departure time is 11:19 AM, arriving at 1:31 PM.\n");
    } else if (minutes_from_midnight < 900) {
      printf("Closest departure time is 12:47 PM, arriving at 3:00 PM.\n");
    } else if (minutes_from_midnight < 968) {
      printf("Closest departure time is 2:00 PM, arriving at 4:08 PM.\n");
    } else if (minutes_from_midnight < 1075) {
      printf("Closest departure time is 3:45 PM, arriving at 5:55 PM.\n");
    } else if (minutes_from_midnight < 1280) {
      printf("Closest departure time is 7:00 PM, arriving at 9:20 PM.\n");
    } else if (minutes_from_midnight < 1438) {
      printf("Closest departure time is 9:45 PM, arriving at 11:58 PM.\n");
    } else {
      printf("out of service time.\n");
    }

    return 0;
  }

