/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects09.c (Chapter 08, page 179) */
/* random walk across 10 X 10 array */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define SIDE 10
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define DIRECTION 4
#define LENGTH 'Z' - 'A'

int main(void)
  {
    char grid[SIDE][SIDE];
    char ch = 'A'; /* start alphabet */
    int position[4], x = 0, y = 0, nums_of_selection; /* initial direct and position */

    /* grid initializer */
    for (int i = 0; i < SIDE; i++)
      for (int j = 0; j < SIDE; j++)
        grid[i][j] = '.';
    grid[y][x] = ch;

    /* random initializer */
    srand((unsigned) time(NULL));

    /* main logic */
    for (int i = 0; i < LENGTH; i++) {

      /* initialize */
      nums_of_selection = 0;

      /* get info for effective side */
      for (int j = 0; j < DIRECTION; j++) {
        switch(j) {
          case UP:
            if (y != 0 && grid[y - 1][x] == '.')
              position[nums_of_selection++] = UP;
            break;
          case DOWN:
            if (y != (SIDE - 1) && grid[y + 1][x] == '.')
              position[nums_of_selection++] = DOWN;
            break;
          case LEFT:
            if (x != 0 && grid[y][x - 1] == '.')
              position[nums_of_selection++] = LEFT;
            break;
          case RIGHT:
            if (x != (SIDE - 1) && grid[y][x + 1] == '.')
              position[nums_of_selection++] = RIGHT;
            break;
        }
      }

      /* stop when no way */
      if (nums_of_selection == 0)
        break;

      /* make a random direction decision */
      switch((position[rand() % nums_of_selection])) {
          case UP:
            grid[--y][x] = ++ch;
            break;
          case DOWN:
            grid[++y][x] = ++ch;
            break;
          case LEFT:
            grid[y][--x] = ++ch;
            break;
          case RIGHT:
            grid[y][++x] = ++ch;
            break;
      }
    }

    /* print image */
    for (int i = 0; i < SIDE; i++) {
      for (int j = 0; j < SIDE; j++)
        printf("%2c", grid[i][j]);
      printf("\n");
    }

    return 0;
  }

