/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects15.c (Chapter 07, page 159) */
/* Computes the factorial of a positive integer */
/* Uses short,int,long,long long,float,double,long double type to compute. */
/* The comment includes the result on RHEL5.9. */

#include <stdio.h>

int main(void)
{
  /* (a) the largest value of short is 7 (result = 5040) for
     which the program correctly prints the factorial of n. */
  short short_n, short_i, short_factorial;
  printf("Enter a positive integer: ");
  scanf("%hd", &short_n);
  for (short_i = 1, short_factorial = 1; short_i <= short_n; short_i++)
    short_factorial *= short_i;
  printf("Factorial(short) of %hd: %hd\n", short_n, short_factorial);

  /* (b) the largest value of int is 12 (result = 479001600) for
     which the program correctly prints the factorial of n. */
  int int_n, int_i, int_factorial;
  printf("Enter a positive integer: ");
  scanf("%d", &int_n);
  for (int_i = 1, int_factorial = 1; int_i <= int_n; int_i++)
    int_factorial *= int_i;
  printf("Factorial(int) of %d: %d\n", int_n, int_factorial);

  /* (c) the largest value of long is 20 (result = 2432902008176640000) for
     which the program correctly prints the factorial of n. */
  long long_n, long_i, long_factorial;
  printf("Enter a positive integer: ");
  scanf("%ld", &long_n);
  for (long_i = 1, long_factorial = 1; long_i <= long_n; long_i++)
    long_factorial *= long_i;
  printf("Factorial(long) of %ld: %ld\n", long_n, long_factorial);

  /* (d) the largest value of long long is 20 (result = 2432902008176640000) for
     which the program correctly prints the factorial of n. */
  long long ll_n, ll_i, ll_factorial;
  printf("Enter a positive integer: ");
  scanf("%lld", &ll_n);
  for (ll_i = 1, ll_factorial = 1; ll_i <= ll_n; ll_i++)
    ll_factorial *= ll_i;
  printf("Factorial(long long) of %lld: %lld\n", ll_n, ll_factorial);

  /* (e) the largest value of float is 34
     which the program correctly prints the factorial of n. */
  float float_n, float_i, float_factorial;
  printf("Enter a positive number: ");
  scanf("%f", &float_n);
  for (float_i = 1.0f, float_factorial = 1.0f; float_i <= float_n; float_i++)
    float_factorial *= float_i;
  printf("Factorial(float) of %f: %f\n", float_n, float_factorial);

  /* (f) the largest value of double is 170
     for which the program correctly prints the factorial of n. */
  double double_n, double_i, double_factorial;
  printf("Enter a positive number: ");
  scanf("%lf", &double_n);
  for (double_i = 1.0, double_factorial = 1.0; double_i <= double_n; double_i++)
    double_factorial *= double_i;
  printf("Factorial(double) of %f: %f\n", double_n, double_factorial);

  /* (g) the largest value of long double is 1754
     for which the program correctly prints the factorial of n. */
  long double ld_n, ld_i, ld_factorial;
  printf("Enter a positive number: ");
  scanf("%Lf", &ld_n);
  for (ld_i = 1.0L, ld_factorial = 1.0L; ld_i <= ld_n; ld_i++)
    ld_factorial *= ld_i;
  printf("Factorial(long double) of %Lf: %Lf\n", ld_n, ld_factorial);

  return 0;
}

