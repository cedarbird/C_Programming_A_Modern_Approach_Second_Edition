/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* convert24hour.c (Chapter 7, page 158) */

#include <stdio.h>
#include <ctype.h>

int main(void)
  {
    int hours, minutes;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    while((ch = getchar()) == ' ')
      ;

    switch(toupper(ch)) {
      case 'P':
        if (hours == 12)
          printf("24 Hour Time is: 12:%.2d\n", minutes);
        else
          printf("24 Hour Time is: %.2d:%.2d\n", hours + 12, minutes);
        break;
      default:
        if (hours == 12)
          printf("24 Hour Time is: 00:%.2d\n", minutes);
        else
          printf("24 Hour Time is: %.2d:%.2d\n", hours, minutes);
        break;
    }

    return 0;
  }

