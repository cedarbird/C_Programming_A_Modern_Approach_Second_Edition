/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects03.c (Chapter 08, page 178) */
/* Checks numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

#define NUMS_DECIMAL 10

int main(void)
{
  bool digit_seen[NUMS_DECIMAL];
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);
  while (n > 0) {
    /* array initializer */
    for (int i = 0; i < NUMS_DECIMAL; i++)
      digit_seen[i] = false;

    /* check repeated digit */
    while (n > 0) {
      digit = n % NUMS_DECIMAL;
      if (digit_seen[digit])
        break;
      digit_seen[digit] = true;
      n /= 10;
    }

    if (n > 0)
      printf("Repeated digit\n");
    else
      printf("No Repeated digit\n");

    printf("Enter a number: ");
    scanf("%ld", &n);
  }

  return 0;
}

