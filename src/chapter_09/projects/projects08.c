/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects08.c (Chapter 09, page 217) */
/* Rolls dice game */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define NUMS_DIRECTION 6

int roll_dice(void);
bool play_game(void);

int main(void)
{
  int wins = 0, losses = 0;

  srand((unsigned) time(NULL));
  for (;;) {
    if (play_game()) wins++;
    else losses++;
    printf("\nPlay again? ");
    if (toupper(getchar()) != 'Y') {
      printf("Wins: %d  Losses: %d\n", wins, losses);
      break;
    }
    while (getchar() != '\n') /* skip the left input end to newline */
      ;
    printf("\n");
  }

  return 0;
}

bool play_game(void)
{
  int dice, point;
  switch (point = roll_dice()) {
    case 7: case 11: printf("You win!\n"); return true;
    case 2: case 3: case 12: printf("You lose!\n"); return false;
  }
  printf("Your point is %d\n", point);

  for (;;) {
    dice = roll_dice();
    if (dice == point) {
      printf("You win!\n");
      return true;
    } else if (dice == 7) {
      printf("You lose!\n");
      return false;
    }
  }
}

int roll_dice(void)
{
  int dice = rand() % NUMS_DIRECTION + rand() % NUMS_DIRECTION + 2;

  printf("You rolled: %d\n", dice);

  return dice;
}

