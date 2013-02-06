/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* convert_to_octal.c (Chapter 4, page 71) */

#define OCTAL 8

#include <stdio.h>

int main(void)
{
  int i;
  int d1, d2, d3, d4, d5;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &i);

  d5 = i % OCTAL;
  i /= OCTAL;
  d4 = i % OCTAL;
  i /= OCTAL;
  d3 = i % OCTAL;
  i /= OCTAL;
  d2 = i % OCTAL;
  i /= OCTAL;
  d1 = i % OCTAL;
  
  printf("In octal, your number is: %d%d%d%d%d\n", d1, d2, d3, d4, d5);
  return 0;
}

