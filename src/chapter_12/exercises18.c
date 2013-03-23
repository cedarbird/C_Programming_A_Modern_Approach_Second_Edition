/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises18.c (Chapter 12, page 275) */
/* Evaluates position */

#include <stdio.h>
#include <ctype.h>

int evaluate_position(char *board, int n)
{
  int position = 0, current_score;
  char *current_pieces;

  for (current_pieces = board; current_pieces < board + n; current_pieces++) {
    switch (toupper(*current_pieces)) {
      case 'Q': current_score = 9; break;
      case 'R': current_score = 5; break;
      case 'B': current_score = 3; break;
      case 'N': current_score = 3; break;
      case 'P': current_score = 1; break;
      default : current_score = 0; break;
    }

    if (*current_pieces >='A' && *current_pieces <= 'Z')
      position += current_score;
    if (*current_pieces >='a' && *current_pieces <= 'z')
      position -= current_score;
  }

  return position;
}

int main(void)
{
  char board[8][8] = {[0][1] = 'Q', 'B', 'B', 'N', 'P',
                      [7][1] = 'q', 'r', 'b', 'n'};

  printf("the position is %d\n", evaluate_position(&board[0][0], 8 * 8));

  return 0;
}

