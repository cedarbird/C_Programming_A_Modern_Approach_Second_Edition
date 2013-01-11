/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects07.c (Chapter 08, page 179) */
/* calculate 5 X 5 matrix's row/column total summary */

#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(void)
  {
    int matrix[ROWS][COLS], sum;

    for (int i = 0; i < ROWS; i++) {
       printf("Enter Row %d: ", i + 1);
       scanf("%d%d%d%d%d", &matrix[i][0],
                           &matrix[i][1],
                           &matrix[i][2],
                           &matrix[i][3],
                           &matrix[i][4]);
    }

    printf("Row Totals:\t");
    for (int i = 0; i < ROWS; i++) {
      sum = 0;
      for (int j = 0; j < COLS; j++)
        sum += matrix[i][j];
      printf("%10d", sum);
    }
    printf("\n");

    printf("Column Totals:\t");
    for (int i = 0; i < COLS; i++) {
      sum = 0;
      for (int j = 0; j < ROWS; j++)
        sum += matrix[j][i];
      printf("%10d", sum);
    }
    printf("\n");

    return 0;
  }

