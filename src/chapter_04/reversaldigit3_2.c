/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* reversaldigit3_2.c (Chapter 4, page 71) */

#include <stdio.h>

int main(void)
{
  int n1, n2, n3;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &n1, &n2, &n3);
  printf("The reversal is: %d%d%d\n", n3, n2, n1);

  return 0;
}

