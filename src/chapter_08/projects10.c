/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects10.c (Chapter 08, page 180) */
/* Displays the departure and arrival time for the flght whose departue time
   is closest to that entered bu the user */

#include <stdio.h>
#define NUM_FLIGHTS ((int) sizeof(departure_times) / sizeof(departure_times[0]))

int main(void)
{
  int i, hours, minutes, minutes_from_midnight;
  const int departure_times[] = {480, 583, 679, 767, 840, 945,  1140, 1305},
            arrival_times[]   = {616, 712, 811, 900, 968, 1075, 1280, 1438};

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &hours, &minutes);

  minutes_from_midnight = hours * 60 + minutes;

  for (i = NUM_FLIGHTS - 1; i >= 0; i--)
    if (minutes_from_midnight >= departure_times[i])
      break;

  if (minutes_from_midnight < departure_times[0])
    i = NUM_FLIGHTS - 1;

  printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d.\n",
           departure_times[i] / 60, departure_times[i] % 60,
           arrival_times[i] / 60, arrival_times[i] % 60);

  return 0;
}

