/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises05.c (Chapter 11, page 255) */

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
  int total_sec = 7403, hours, minutes, seconds;
  split_time(total_sec, &hours, &minutes, &seconds);
  printf("hour: %d, minute: %d, second: %d\n", hours, minutes, seconds);

  return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
  *hr = (int) (total_sec / 3600);
  *min = (int) ((total_sec - (long) 3600 * *hr) / 60);
  *sec = (int) (total_sec - (long) 3600 * *hr - (long) 60 * *min);
}

