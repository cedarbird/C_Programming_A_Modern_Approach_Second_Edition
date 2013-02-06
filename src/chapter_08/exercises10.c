/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises10.c (Chapter 08, page 178) */
/* show chess_board */

#include <stdio.h>

#define ROWS 8
#define COLS 8

int main(void)
  {
    char chess_board[ROWS][COLS] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                                    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
                                    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                                    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
                                    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                                    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    printf("Chess Board:\n");
    for (int i = 0; i < ROWS; i++) {
      for (int j = 0; j < COLS; j++)
        printf("%2c", chess_board[i][j]);
      printf("\n");
    }

    return 0;
  }

