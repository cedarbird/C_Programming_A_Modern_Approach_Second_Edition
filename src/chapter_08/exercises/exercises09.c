/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises09.c (Chapter 08, page 178) */
/* Computes temperatue's average */
/* The result is (14400 / (30 * 24)) = 20.0 */

#include <stdio.h>

#define DAYS_MONTH 30
#define HOURS_DAY 24

int main(void)
{
  float temperature_readings[DAYS_MONTH][HOURS_DAY] = {{14400.0f}};
  float sum_temperatue = 0.0f;

  for (int i = 0; i < DAYS_MONTH; i++)
    for (int j = 0; j < HOURS_DAY; j++)
      sum_temperatue += temperature_readings[i][j];

  printf("Average Temperatue is: %.1f\n", sum_temperatue / (DAYS_MONTH * HOURS_DAY));

  return 0;
}

