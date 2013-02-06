/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects03.c (Chapter 02, page 34) */
/* computes the volume of a sphere */

#include <stdio.h>

#define PI 3.1416f

int main(void)
  {
    float radius;

    printf("Enter a radius: ");
    scanf("%f", &radius);

    printf("The volume of a sphere with %.2f-meter radius is: %.2f\n",
             radius, 4.0f * PI * radius * radius * radius / 3.0f);

    return 0;
  }

