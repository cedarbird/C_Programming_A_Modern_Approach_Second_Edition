/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects02.c (Chapter 02, page 34) */
/* Computes the volume of a sphere with 10-meter radius */

#include <stdio.h>

#define PI 3.1416f

int main(void)
{
  printf("The volume of a sphere with 10-meter radius is: %.2f\n",
           4.0f * PI * 10.0f * 10.0f * 10.0f / 3.0f);

  return 0;
}

