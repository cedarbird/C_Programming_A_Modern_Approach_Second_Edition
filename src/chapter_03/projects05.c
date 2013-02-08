/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects05.c (Chapter 03, page 50) */
/* Prints & Sums 4 X 4 square board */
/* Sees http://mathworld.wolfram.com/DuerersMagicSquare.html */

#include <stdio.h>

int main(void)
  {
    int d01, d02, d03, d04,
        d05, d06, d07, d08,
        d09, d10, d11, d12,
        d13, d14, d15, d16;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
             &d01, &d02, &d03, &d04,
             &d05, &d06, &d07, &d08,
             &d09, &d10, &d11, &d12,
             &d13, &d14, &d15, &d16);

    printf("%2d %2d %2d %2d\n", d01, d02, d03, d04);
    printf("%2d %2d %2d %2d\n", d05, d06, d07, d08);
    printf("%2d %2d %2d %2d\n", d09, d10, d11, d12);
    printf("%2d %2d %2d %2d\n", d13, d14, d15, d16);

    printf("Row sums: %d %d %d %d\n",
              d01 + d02 + d03 + d04,
              d05 + d06 + d07 + d08,
              d09 + d10 + d11 + d12,
              d13 + d14 + d15 + d16);

    printf("Column sums: %d %d %d %d\n",
              d01 + d05 + d09 + d13,
              d02 + d06 + d10 + d14,
              d03 + d07 + d11 + d15,
              d04 + d08 + d12 + d16);

    printf("Diagonal sums: %d %d\n",
              d01 + d06 + d11 + d16,
              d04 + d07 + d10 + d13);

    printf("Middle sums: %d\n",
              d06 + d07 + d10 + d11);

    return 0;
  }

