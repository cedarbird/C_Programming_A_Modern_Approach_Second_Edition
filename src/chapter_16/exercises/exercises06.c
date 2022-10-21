/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises06.c (Chapter 16, page 408) */
#include <stdio.h>

struct time {
  int hours;
  int minutes;
  int seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
  struct time t = split_time(7703L);
  printf("%d %d %d\n", t.hours, t.minutes, t.seconds);

  return 0;
}

struct time split_time(long total_seconds)
{
  struct time t;
  t.hours = total_seconds / 3600;
  t.minutes = (total_seconds - t.hours * 3600) / 60;
  t.seconds = total_seconds - t.hours * 3600 - t.minutes * 60;

  return t;
}

