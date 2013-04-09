/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises06.c (Chapter 14, page 345) */

#include <stdio.h>
#include <math.h>

#define DISP(f, x) printf(#f "(%g) = %g\n", (x),  f(x))

int main(void)
{
  DISP(sqrt, 3.0);
  DISP(sqrt, 3.0 + 2.0);

  return 0;
}

