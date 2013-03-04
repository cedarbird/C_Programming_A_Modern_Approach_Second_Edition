/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects01.c (Chapter 07, page 157) */
/* Prints a table of squares using a for statement */
/*  short int values are usually stored in 16 bits, causing failure at 182.
    int and long int values are usually stored in 32 bits,
    with failure occurring at 46341. */

#include <stdio.h>

int main(void)
{
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    printf("%10d%20hd\n", i, (short) i * i);
    printf("%10d%20d\n", i, i * i);
    printf("%10d%20ld\n", i, (long) i * i);
  }

  return 0;
}
