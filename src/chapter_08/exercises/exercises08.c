/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises08.c (Chapter 08, page 178) */
/* Declarates a 24-hours temperature for a month */

#include <stdio.h>

#define DAYS_MONTH 30
#define HOURS_DAY 24

int main(void)
{
  float temperature_readings[DAYS_MONTH][HOURS_DAY] = {{0.0f}};

  printf("A 24-hours temperature in a month:\n    ");

  for (int i = 0; i < HOURS_DAY; i++)
    printf("%4dH", i);
  printf("\n");

  for (int i = 0; i < DAYS_MONTH; i++) {
    printf("%2dD:", i + 1);
    for (int j = 0; j < HOURS_DAY; j++)
      printf("%5.1f", temperature_readings[i][j]);
    printf("\n");
  }

  return 0;
}

