/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects01.c (Chapter 05, page 95) */
/* Calculates how many digits a number contains */
/* initialize digits by 0 may be used to suppress the warning :
   'digits' may be used uninitialized in this function
   so 'the number ddddd has 0 digits' message
   means input number is outside that we assume(no more 4 digits). */

#include <stdio.h>

int main(void)
{
  int number, abv_of_number, digits = 0;

  printf("Enter a number(no more than 4 digits): ");
  scanf("%d", &number);

  /* convert number to it's absolute value
     when number < 0, the result is also right. */
  abv_of_number = number < 0 ? -number : number;

  if      (abv_of_number < 10)     digits = 1;
  else if (abv_of_number < 100)    digits = 2;
  else if (abv_of_number < 1000)   digits = 3;
  else if (abv_of_number < 10000)  digits = 4;

  printf("The number %d has %d digits.\n", number, digits);

  return 0;
}

