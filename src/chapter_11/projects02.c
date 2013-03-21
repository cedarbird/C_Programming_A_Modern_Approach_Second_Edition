/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects02.c (Chapter 11, page 256) */
/* Displays the departure and arrival time for the flght whose departue time
   is closest to that entered bu the user */

#include <stdio.h>

#define NUM_FLIGHTS ((int) sizeof(departure_times) / sizeof(departure_times[0]))

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);

int main(void)
{
  int hours, minutes, departure_time, arrival_time;

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &hours, &minutes);

  find_closest_flight(hours * 60 + minutes, &departure_time, &arrival_time);

  printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d.\n",
           departure_time / 60, departure_time % 60,
           arrival_time / 60, arrival_time % 60);

  return 0;
}

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time)
{
  const int departure_times[] = {480, 583, 679, 767, 840, 945,  1140, 1305},
            arrival_times[]   = {616, 712, 811, 900, 968, 1075, 1280, 1438};
  int i;

  for (i = NUM_FLIGHTS - 1; i >= 0; i--)
    if (desired_time >= departure_times[i])
      break;

  if (desired_time < departure_times[0])
    i = NUM_FLIGHTS - 1;

  *departure_time = departure_times[i];
  *arrival_time = arrival_times[i];
}

