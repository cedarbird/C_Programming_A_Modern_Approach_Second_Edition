/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* printfloat.c (Chapter 3, page 49) */
/* Prints float values in various formats */

#include <stdio.h>

int main(void)
{
  float x;

  printf("Enter a float-point number: ");
  scanf("%f", &x);

  printf("%-8.1e$\n", x);
  printf("%10.6e$\n", x);
  printf("%-8.3f$\n", x);
  printf("%6.0f$\n", x);

  return 0;
}

