/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects01.c (Chapter 06, page 122) */
/* Finds the largest in a serries of numbers entered by user
   When the user enters 0 or a negative number, The program exit
   and print the largest nonnegative number. */

#include <stdio.h>

int main(void)
{
  float input, max;

  /* initialize */
  printf("Enter a number: ");
  scanf("%f", &input);
  max = input;

  while(input > 0.0f) {
    printf("Enter a number: ");
    scanf("%f", &input);
    if (input > max)
      max = input;
  }

  if (max >= 0.0f)
    printf("The largest number entered was %.2f.\n", max);
  else
    printf("The nonnegative number was not entered.\n");

  return 0;
}

