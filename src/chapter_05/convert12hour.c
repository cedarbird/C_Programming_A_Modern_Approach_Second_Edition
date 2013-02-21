/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* convert12hour.c (Chapter 05, page 96) */

#include <stdio.h>

int main(void)
  {
    int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    printf("Equivalent 12-hour time: ");
    if (hours == 0)
      printf("12:%.2d AM\n", minutes);
    if (hours < 12)
      printf("%d:%.2d AM\n", hours, minutes);
    else if (hours == 12)
      printf("%d:%.2d PM\n", hours, minutes);
    else
      printf("%d:%.2d PM\n", hours - 12, minutes);

    return 0;
  }

