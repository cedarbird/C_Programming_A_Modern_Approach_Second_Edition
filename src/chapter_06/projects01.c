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
   When the user enters 0 or a negative number, The program
   print the largest nonnegative number and exit. */

#include <stdio.h>

int main(void)
{
  float input, max = 0.0f;

  do {
    printf("Enter a number: ");
    scanf("%f", &input);
    if (input > max)
      max = input;
  } while (input > 0.0f);

  if (max > 0.0f)
    printf("The largest number entered was %f.\n", max);
  else
    printf("The positive number was not entered.\n");

  return 0;
}

