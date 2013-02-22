/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* section72.c (Chapter 7, page 155) */

#include <stdio.h>

int main(void)
  {
    printf("%g.\n", 010E2);
    printf("%g.\n", 32.1E+5);
//  printf("%g.\n", 0790);    /* wrong octal number 9 */
//  printf("%g.\n", 100_000); /* wrong number format */
    printf("%g.\n", 3.978e-2);

    return 0;
  }

