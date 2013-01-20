/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises07.c (Chapter 09, page 214) */
/* validate legal call */

int f(int a, int b)
  {
    return a % b;
  }

#include <stdio.h>

int main(void)
  {
    int i = f(83, 12);
    printf("%d\n", i);
    double x = f(83, 12);
    printf("%f\n", x);
    i = f(3.15, 9.28);
    printf("%d\n", i);
    x = f(3.15, 9.28);
    printf("%f\n", x);
    f(83, 12);

    return 0;
  }

