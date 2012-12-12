/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* section61.c (Chapter 6, page 120) */

#include <stdio.h>

int main(void)
  {
    int i = 1;
    while (i <= 128) {
      printf("%d ", i);
      i *= 2;
    } 
    return 0;
  }

