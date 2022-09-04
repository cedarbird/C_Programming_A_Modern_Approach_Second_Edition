/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects06.c (Chapter 07, page 158) */
/* Prints the values of sizeof(int/short/long/float/double/long double) */
/* Since the type of a sizeof expression may vary from one implementation
    to another, it's necessary in C89 to cast sizeof expressions to a known
    type before printing them. The sizes of the basic types are small numbers,
    so it's safe to cast them to int. (In general, however, it's best to cast
    sizeof expressions to unsigned long and print them using %lu.) In C99,
    we can avoid the cast by using the %zu conversion specification. */

#include <stdio.h>

int main(void)
{
  printf("Size of int: %zu\n",         sizeof(int));
  printf("Size of short: %zu\n",       sizeof(short));
  printf("Size of long: %zu\n",        sizeof(long));
//printf("Size of long long: %zu\n",   sizeof(long long));
  printf("Size of float: %zu\n",       sizeof(float));
  printf("Size of double: %zu\n",      sizeof(double));
  printf("Size of long double: %zu\n", sizeof(long double));

  return 0;
}

