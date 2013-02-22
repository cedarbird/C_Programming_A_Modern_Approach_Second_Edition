/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* section611.c (Chapter 6, page 122) */

#include <stdio.h>

int main(void)
  {
    int m = 100;
    for (int n = 0; (m /= 2) > 0; n++)
      ;

    return 0;
  }

