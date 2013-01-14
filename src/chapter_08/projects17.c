/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects17.c (Chapter 08, page 181) */
/* n x n magic square (1 <= n <= 99 and is odd number) */

#include <stdio.h>
#include <stdbool.h>

int main(void)
  {
    int n, rows, cols = 0;
    int i, j;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int magic_square[n][n]; /* VLA */

    /* initializer */
    for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
        magic_square[i][j] = 0;
    rows = n / 2;
    magic_square[cols][rows] = 1;

    /* main logic */
    for (i = 1; i < n * n; i++)
      if (magic_square[(cols + n - 1) % n][(rows + 1) % n] == 0)
        magic_square[cols = (cols + n - 1) % n][rows = (rows + 1) % n] = i + 1;
      else
        magic_square[cols = (cols + 1) % n][rows] = i + 1;

    /* print magic square */
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++)
        printf("%6d", magic_square[i][j]);
      printf("\n");
    }

    return 0;
  }

