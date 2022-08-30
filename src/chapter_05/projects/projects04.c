/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects04.c (Chapter 05, page 96) */
/* Estimates wind force by Beaufort scale */

#include <stdio.h>

int main(void)
{
  int speed;

  printf("Enter a wind speed in knots: ");
  scanf("%d", &speed);

  if (speed < 1)
    printf("Calm\n");
  else if (speed <= 3)
    printf("Light air\n");
  else if (speed <= 27)
    printf("Breeze\n");
  else if (speed <= 47)
    printf("Gale\n");
  else if (speed <= 63)
    printf("Storm\n");
  else
    printf("Hurricane\n");

  return 0;
}

