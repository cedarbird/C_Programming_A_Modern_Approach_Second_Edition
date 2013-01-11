/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises11.c (Chapter 08, page 178) */
/* show checker_board(A/B) */

#include <stdio.h>

#define ROWS 8
#define COLS 8
#define ODD_CHAR 'A'
#define EVEN_CHAR 'B'

int main(void)
  {
    char checker_board[ROWS][COLS];

    /* fill checker board */
    for (int i = 0; i < ROWS; i++)
      for (int j = 0; j < COLS; j++) {
        if ((i + j) % 2 == 0)
          checker_board[i][j] = EVEN_CHAR;
        else
          checker_board[i][j] = ODD_CHAR;
      }

    printf("Check Board:\n");
    for (int i = 0; i < ROWS; i++) {
      for (int j = 0; j < COLS; j++)
        printf("%2c", checker_board[i][j]);
      printf("\n");
    }

    return 0;
  }

