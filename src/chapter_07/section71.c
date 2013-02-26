/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* section71.c (Chapter 07, page 155) */

#include <stdio.h>

int main(void)
  {
    int a = 077, b = 0x77, c = 0XABC;
    printf("%d %d %d.\n", a, b, c);

    return 0;
  }

