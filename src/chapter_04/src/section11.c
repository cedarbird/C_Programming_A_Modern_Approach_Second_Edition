/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* section11.c (Chapter 4, page 70) */

#include <stdio.h>

int main(void)
{
  int i, j, k;

  i = 1;
  printf("%d \n", i++ - 1);
  printf("%d \n", i);

  i = 10;
  j = 5;
  printf("%d \n", i++ - ++j);
  printf("%d %d\n", i, j);
  
  i = 7;
  j = 8;
  printf("%d \n", i++ - --j);
  printf("%d %d\n", i, j);

  i = 3;
  j = 4;
  k = 5;
  printf("%d \n", i++ - j++ + --k);
  printf("%d %d %d\n", i,  j, k);

  return 0;
}

