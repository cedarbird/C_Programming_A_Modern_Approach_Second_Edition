/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K.N.King                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* reversaldigit.c (Chapter 06, page 123) */

#include <stdio.h>

int main(void)
{
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);
  printf("The reversal is: ");
  while(1) {
    printf("%ld", n % 10);
    n /= 10;
    if (n == 0)
      break;      
  }
  printf("\n");

  return 0;
}

