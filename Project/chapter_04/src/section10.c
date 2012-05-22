/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* section10.c (Chapter 4, page 70) */

#include <stdio.h>

int main(void)
{
  int i, j;
  i = 6;
  j = i += i;
  printf("%d %d\n", i, j);

  i = 5;
  j = (i -= 2) + 1;
  printf("%d %d\n", i, j);
  
  i = 7;
  j = 6 + (i = 2.5);
  printf("%d %d\n", i, j);

  i = 2;
  j = 8;
  j = (i = 6) + (j = 3);
  printf("%d %d\n", i, j);

  return 0;
}
