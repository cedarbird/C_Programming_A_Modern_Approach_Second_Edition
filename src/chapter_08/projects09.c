/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects09.c (Chapter 08, page 179) */
/* Generates random walk across 10 X 10 array */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define SIDE 10
#define UP    0
#define DOWN  1
#define LEFT  2
#define RIGHT 3
#define NUM_DIRECTIONS 4
#define WALK_DISTANCE 26

int main(void)
{
  char grid[SIDE][SIDE];
  char ch = 'A';
  int position[NUM_DIRECTIONS], x = 0, y = 0, num_selections;

  /* grid initializer */
  for (int i = 0; i < SIDE; i++)
    for (int j = 0; j < SIDE; j++)
      grid[i][j] = '.';
  grid[y][x] = ch;

  /* random initializer */
  srand((unsigned) time(NULL));

  /* main logic */
  for (int i = 0; i < WALK_DISTANCE - 1; i++) {
    num_selections = 0;

    /* get info for effective selection */
    if (y != 0 && grid[y - 1][x] == '.')
      position[num_selections++] = UP;
    if (y != (SIDE - 1) && grid[y + 1][x] == '.')
      position[num_selections++] = DOWN;
    if (x != 0 && grid[y][x - 1] == '.')
      position[num_selections++] = LEFT;
    if (x != (SIDE - 1) && grid[y][x + 1] == '.')
      position[num_selections++] = RIGHT;

    /* stop when no way */
    if (num_selections == 0)
      break;

    /* make a random direction decision */
    switch((position[rand() % num_selections])) {
      case UP:    grid[--y][x] = ++ch; break;
      case DOWN:  grid[++y][x] = ++ch; break;
      case LEFT:  grid[y][--x] = ++ch; break;
      case RIGHT: grid[y][++x] = ++ch; break;
    }
  }

  /* show result */
  for (int i = 0; i < SIDE; i++) {
    for (int j = 0; j < SIDE; j++)
      printf("%-2c", grid[i][j]);
    printf("\n");
  }

  return 0;
}

