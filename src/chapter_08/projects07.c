/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects07.c (Chapter 08, page 179) */
/* calculate 5 X 5 matrix's row/column totals */

#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(void)
  {
    int matrix[ROWS][COLS], total;

    for (int i = 0; i < ROWS; i++) {
      printf("Enter Row %d: ", i + 1);
      for (int j = 0; j < COLS; j++)
        scanf("%d", &matrix[i][j]);
    }

    printf("Row Totals:\t");
    for (int i = 0; i < ROWS; i++) {
      total = 0;
      for (int j = 0; j < COLS; j++)
        total += matrix[i][j];
      printf("%10d", total);
    }
    printf("\n");

    printf("Column Totals:\t");
    for (int i = 0; i < COLS; i++) {
      total = 0;
      for (int j = 0; j < ROWS; j++)
        total += matrix[j][i];
      printf("%10d", total);
    }
    printf("\n");

    return 0;
  }

