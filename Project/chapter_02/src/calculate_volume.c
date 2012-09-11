/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* calculate_volume.c (Chapter 2, page 34) */

#include <stdio.h>

#define PI 3.1416f

int main(void)
{
  float radius;
  printf("Enter a radius values:");
  scanf("%f", &radius);
  printf("The circle' volume is: %20.2f\n", 4.0f * PI * radius * radius * radius / 3.0f );

  return 0;
}

