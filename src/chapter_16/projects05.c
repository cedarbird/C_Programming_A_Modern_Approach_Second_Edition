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
#define NUM_FLIGHTS 8
typedef struct flight_time {
  int departure_time;
  int arrival_time;
} flight_time;

typedef struct time {
  int hour;
  int minute;
} time;

time convert24to12(time t);

int main(void)
{
  int hours, minutes, minutes_from_midnight, i;
  flight_time ft[NUM_FLIGHTS]
                   = {{ 8 * 60     , 10 * 60 + 16},
                      { 9 * 60 + 43, 11 * 60 + 52},
                      {11 * 60 + 19, 13 * 60 + 31},
                      {12 * 60 + 47, 15 * 60     },
                      {14 * 60     , 16 * 60 +  8},
                      {15 * 60 + 45, 17 * 60 + 55},
                      {19 * 60     , 21 * 60 + 20},
                      {21 * 60 + 45, 23 * 60 + 58}};


  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &hours, &minutes);

  minutes_from_midnight = hours * 60 + minutes;

  for (i = NUM_FLIGHTS - 1; i >= 0; i--)
    if (minutes_from_midnight > ft[i].departure_time) {
      printf("Closest departure time is %d, arriving at %d.\n",
              ft[i].departure_time, ft[i].arrival_time);
      break;
    }

  return 0;
}

time convert24to12(time t)
{
  if (t.hour == 0)

    printf("12:%.2d AM\n", minutes);
  else if (hours < 12)
    printf("%d:%.2d AM\n", hours, minutes);
  else if (hours == 12)
    printf("%d:%.2d PM\n", hours, minutes);
  else
    printf("%d:%.2d PM\n", hours - 12, minutes);
}

