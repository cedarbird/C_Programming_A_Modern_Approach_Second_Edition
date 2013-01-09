/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* lettergrade.c (Chapter 5, page 97) */

#include <stdio.h>

int main(void)
{
  int digit;
  char lettergrade;
  printf("Enter Numerical Grade.\n");
  scanf("%d", &digit);

  if ( 0 > digit || 100 <= digit) {
    printf("error!\nyour must input a postive number in 0-99.\n");
    return -1;
  }


  switch (digit/10) {
    case 9:  lettergrade = 'A'; break;
    case 8:  lettergrade = 'B'; break;
    case 7:  lettergrade = 'C'; break;
    case 6:  lettergrade = 'D'; break;
    default: lettergrade = 'F';
  }

  printf("Letter Grade: %c\n", lettergrade);

  return 0;
}

