/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* cal_digits.c (Chapter 5, page 95) */

#include <stdio.h>

int main(void)
  {
    int i, num = 0;

    printf("Enter a number: ");
    scanf("%d", &i);

    if (i <= 9) {
      num = 1;
    }
    else if (i <= 99) {
      num = 2;
    }
    else if (i <= 999) {
      num = 3;
    }

    printf("The number %d has %d digits.\n", i, num);

    return 0;
  }

