/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects09.c (Chapter 05, page 97) */
/* Indicates which date comes earlier on the calendar */

#include <stdio.h>

#define YEAR_FACTOR 10000
#define MONTH_FACTOR 100

int main(void)
{
  int d1, m1, y1, d2, m2, y2;
  int result;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d /%d /%d", &m1, &d1, &y1);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d /%d /%d", &m2, &d2, &y2);

  result = (y1 - y2) * YEAR_FACTOR + (m1 - m2) * MONTH_FACTOR + (d1 - d2);

  if (result > 0)
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n",
            m2, d2, y2, m1, d1, y1);
  else if (result < 0)
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n",
            m1, d1, y1, m2, d2, y2);
  else
    printf("%.2d/%.2d/%.2d is same as %.2d/%.2d/%.2d.\n",
            m1, d1, y1, m2, d2, y2);

  return 0;
}

