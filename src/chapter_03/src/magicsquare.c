/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* magicsquare.c (Chapter 3, page 50) */

#include <stdio.h>

int main(void)
{
  int digit_01, digit_02, digit_03, digit_04;
  int digit_05, digit_06, digit_07, digit_08;
  int digit_09, digit_10, digit_11, digit_12;
  int digit_13, digit_14, digit_15, digit_16;

  printf("Enter the number from 1 to 16 in any order:\n");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", 
         &digit_01, &digit_02, &digit_03, &digit_04,
         &digit_05, &digit_06, &digit_07, &digit_08,
         &digit_09, &digit_10, &digit_11, &digit_12,
         &digit_13, &digit_14, &digit_15, &digit_16
        );
  
  printf("%2d %2d %2d %2d\n", digit_01, digit_02, digit_03, digit_04);
  printf("%2d %2d %2d %2d\n", digit_05, digit_06, digit_07, digit_08);
  printf("%2d %2d %2d %2d\n", digit_09, digit_10, digit_11, digit_12);
  printf("%2d %2d %2d %2d\n", digit_13, digit_14, digit_15, digit_16);

  return 0;
}

