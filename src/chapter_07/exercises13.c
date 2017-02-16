/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercise13.txt (Chapter 07, page 157)
(a) -3    signed int
(b) 7     signed long
(c) 6.5f  float
(d) 3.75  double
(e) -1.0  double
(f) 6     signed int
*/

int main(void)
{
  char c = '\1';
  short s = 2;
  int i = -3;
  long m = 5;
  float f = 6.5f;
  double d = 7.5;

  printf("%d\t%zu\n", c * i, sizeof(c * i));
  printf("%ld\t%zu\n", s + m, sizeof(s + m));
  printf("%f\t%zu\n", f / c, sizeof(f / c));
  printf("%lf\t%zu\n", d / s, sizeof(d / s));
  printf("%f\t%zu\n", f - d, sizeof(f - d));
  printf("%d\t%zu\n", (int) f, sizeof((int) f));
}

