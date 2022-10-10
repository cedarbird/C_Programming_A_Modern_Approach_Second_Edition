/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises01.c (Chapter 14, page 345) */

#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER_BY_4(n) ((n) % 4)
#define LT100(x,y) ((x) * (y) < 100.0 ? 1 : 0)

int main(void)
{
  /* when result not overflow CUBE always work */
  printf("CUBE(5): %d\n", CUBE(5));
  printf("CUBE(3): %d\n", CUBE(3));
  printf("CUBE(1.1): %f\n", CUBE(1.1));
  printf("CUBE(' '): %d\n", CUBE(' '));

  /*  when n is integer REMAINDER always work */
  printf("REMAINDER_BY_4(23): %d\n", REMAINDER_BY_4(23));
  printf("REMAINDER_BY_4(29): %d\n", REMAINDER_BY_4(29));
  printf("REMAINDER_BY_4(24): %d\n", REMAINDER_BY_4(24));
  printf("REMAINDER_BY_4(130): %d\n", REMAINDER_BY_4(130));

  /*  when n is integer LT100always work */
  printf("LT100(10.0, 10.1): %d\n", LT100(10.0, 10.1));
  printf("LT100(10.0, 10.0): %d\n", LT100(10.0, 10.0));
  printf("LT100(10.0, 9.9): %d\n", LT100(10.0, 9.9));
  printf("LT100(-10.0, 9.9): %d\n", LT100(-10.0, 9.9));
  printf("LT100(-10.0, -10.0): %d\n", LT100(-10.0, -10.0));

  return 0;
}

