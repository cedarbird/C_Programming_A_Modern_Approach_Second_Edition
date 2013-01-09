/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* print_sizeof.c (Chapter 7, page 158) */

#include <stdio.h>

int main(void)
  {
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of short: %zu\n", sizeof(short));
    printf("Size of long: %zu\n", sizeof(long));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of long double: %zu\n", sizeof(long double));

    return 0;
  }

