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

#define MAXDAYS_OF_YEAR 366
#define MAXDAYS_OF_MONTH 31

int main(void)
{
  int d1, m1, y1, d2, m2, y2,
      weighing1, weighing2;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d /%d /%d", &m1, &d1, &y1);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d /%d /%d", &m2, &d2, &y2);

  /* Computes weighing of date */
  weighing1 = y1 * (MAXDAYS_OF_YEAR + 1) + m1 * (MAXDAYS_OF_MONTH + 1) + d1;
  weighing2 = y2 * (MAXDAYS_OF_YEAR + 1) + m2 * (MAXDAYS_OF_MONTH + 1) + d2;

  if (weighing1 < weighing2)
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n",
            m1, d1, y1, m2, d2, y2);
  else if (weighing1 > weighing2)
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n",
            m2, d2, y2, m1, d1, y1);
  else
    printf("%.2d/%.2d/%.2d is same as %.2d/%.2d/%.2d.\n",
            m1, d1, y1, m2, d2, y2);

  return 0;
}

