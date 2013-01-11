/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises09.c (Chapter 08, page 178) */
/* show temperatue's average */
/* result is (14400 / (30 * 24)) = 20.0 */

#include <stdio.h>

#define DAYS__OF_MONTH 30
#define HOURS_OF_DAY 24

int main(void)
  {
    float temperature_readings[DAYS__OF_MONTH][HOURS_OF_DAY] = {{14400.0f}};
    float sum_temperatue = 0.0f;

    for (int i = 0; i < DAYS__OF_MONTH; i++)
      for (int j = 0; j < HOURS_OF_DAY; j++)
        sum_temperatue += temperature_readings[i][j];

    printf("Average Temperatue is: %.1f\n", sum_temperatue / (DAYS__OF_MONTH * HOURS_OF_DAY));

    return 0;
  }

