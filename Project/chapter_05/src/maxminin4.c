/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* maxminin4.c (Chapter 5, page 96) */

#include <stdio.h>

int main(void)
  {

    int i1, i2, i3, i4, max1, min1, max2, min2;
    printf("Enter four  integers: ");
    scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

    if (i1 > i2) {
      max1 = i1;
      min1 = i2;
    }
    else {
      max1 = i2;
      min1 = i1;
    }
 
    if (i3 > i4) {
      max2 = i3;
      min2 = i4;
    } 
    else {
      max2 = i4;
      min2 = i3;
    }

    if (max1 > max2)
      printf("The largest is : %d\n", max1);
    else
      printf("The largest is : %d\n", max2);

    if (min1 > min2)
      printf("The smallest is : %d\n", min2);
    else
      printf("The smallest is : %d\n", min1);

    return 0;
  }

