/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects05.c (Chapter 16, page 412) */
/* Displays the departure and arrival time for the flght whose departue time
   is closest to that entered bu the user */

#include <stdio.h>

#define NUM_FLIGHTS (sizeof(ft)/sizeof(ft[0]))

struct time {
  int hour;
  int minute;
};

struct flight_time {
  struct time departure_time;
  struct time arrival_time;
};

int calculate_minutes(struct time t);

struct flight_time ft[] = {{{ 8,  0}, {10, 16}},
                           {{ 9, 43}, {11, 52}},
                           {{11, 19}, {13, 31}},
                           {{12, 47}, {15,  0}},
                           {{14,  0}, {16,  8}},
                           {{15, 45}, {17, 55}},
                           {{19,  0}, {21, 20}},
                           {{21, 45}, {23, 58}}};

int main(void)
{
  int minutes_from_midnight, i;
  struct time t;

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &t.hour, &t.minute);

  minutes_from_midnight = calculate_minutes(t);

  for (i = NUM_FLIGHTS - 1; i >= 0; i--)
    if (minutes_from_midnight > calculate_minutes(ft[i].departure_time)) {
      break;
    }

  if (i < 0)
    i = NUM_FLIGHTS - 1;

  printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d.\n",
          ft[i].departure_time.hour, ft[i].departure_time.minute,
          ft[i].arrival_time.hour,   ft[i].arrival_time.minute);

  return 0;
}

int calculate_minutes(struct time t)
{
  return t.hour * 60 + t.minute;
}

