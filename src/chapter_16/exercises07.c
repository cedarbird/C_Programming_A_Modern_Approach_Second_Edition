/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises07.c (Chapter 16, page 408) */
#include <stdio.h>

typedef struct fraction {
  int numerator;
  int denominator;
} fraction;

int gcd(int m, int n);
/* (a) */
fraction reduce_fraction(fraction f);
/* (b) */
fraction add_fraction(fraction f1, fraction f2);
/* (c) */
fraction subtract_fraction(fraction f1, fraction f2);
/* (d) */
fraction multiply_fraction(fraction f1, fraction f2);
fraction divide_fraction(fraction f1, fraction f2);


int main(void)
{
  fraction f1 = {10, 12}, f2 = {42, 116}, f;

  f = reduce_fraction(f1);
  printf("%d/%d\n", f.numerator, f.denominator);

  f = reduce_fraction(f2);
  printf("%d/%d\n", f.numerator, f.denominator);

  f = add_fraction(f1, f2);
  printf("%d/%d\n", f.numerator, f.denominator);

  f = subtract_fraction(f1, f2);
  printf("%d/%d\n", f.numerator, f.denominator);

  f = multiply_fraction(f1, f2);
  printf("%d/%d\n", f.numerator, f.denominator);

  f = divide_fraction(f1, f2);
  printf("%d/%d\n", f.numerator, f.denominator);

  return 0;
}

fraction reduce_fraction(fraction f)
{
  int n = gcd(f.numerator, f.denominator);
  f.numerator /= n;
  f.denominator /= n;

  return f;
}

fraction add_fraction(fraction f1, fraction f2)
{
  fraction f = { f1.numerator * f2.denominator + f2.numerator * f1.denominator,
                 f1.denominator * f2.denominator};

  return reduce_fraction(f);
}

fraction subtract_fraction(fraction f1, fraction f2)
{
  fraction f = { f1.numerator * f2.denominator - f2.numerator * f1.denominator,
                 f1.denominator * f2.denominator};

  return reduce_fraction(f);
}

fraction multiply_fraction(fraction f1, fraction f2)
{
  fraction f = { f1.numerator * f2.numerator,
                 f1.denominator * f2.denominator};

  return reduce_fraction(f);
}

fraction divide_fraction(fraction f1, fraction f2)
{
  fraction f = { f1.numerator * f2.denominator,
                 f1.denominator * f2.numerator};

  return reduce_fraction(f);
}

int gcd(int m, int n)
{
  int remainder;

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  return m;
}

