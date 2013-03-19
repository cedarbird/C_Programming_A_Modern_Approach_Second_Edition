/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises13.c (Chapter 09, page 215) */
/* Evaluates position */

#include <stdio.h>
#include <ctype.h>

int evaluate_position(char board[8][8])
{
  int white_score = 0, black_score = 0, current_score;
  int i, j;
  char current_pieces;

  for (i = 0; i < 8; i++)
    for (j = 0; j < 8; j++) {
      current_pieces = board[i][j];

      switch (toupper(current_pieces)) {
        case 'Q': current_score = 9; break;
        case 'R': current_score = 5; break;
        case 'B': current_score = 3; break;
        case 'N': current_score = 3; break;
        case 'P': current_score = 1; break;
        default : current_score = 0; break;
      }

      if (current_pieces >='A' && current_pieces <= 'Z')
        white_score += current_score;
      if (current_pieces >='a' && current_pieces <= 'z')
        black_score += current_score;
    }

  return white_score - black_score;
}

int main(void)
{
  char board[8][8] = {[0][1] = 'Q', 'B', 'B', 'N', 'P',
                      [7][1] = 'q', 'r', 'b', 'n'};

  printf("the position is %d\n", evaluate_position(board));

  return 0;
}

