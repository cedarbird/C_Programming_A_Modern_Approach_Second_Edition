/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* show_ealierday.c (Chapter 5, page 97) */

#include <stdio.h>

int main(void)
  {
    int d1, m1, y1;
    int d2, m2, y2;
    long date1, date2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    date1 = (long)(y1 * 10000 + m1 * 100 + d1);
    date2 = (long)(y2 * 10000 + m2 * 100 + d2);

    if (date1 < date2)
      printf("%d/%d/%d is earlier than %d/%d/%d.\n", m1, d1, y1, m2, d2, y2);
    else if (date1 > date2) 
      printf("%d/%d/%d is earlier than %d/%d/%d.\n", m2, d2, y2, m1, d1, y1);
    else
      printf("%d/%d/%d is same as %d/%d/%d.\n", m2, d2, y2, m1, d1, y1);

    return 0;
  }

