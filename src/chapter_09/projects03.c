/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects03.c (Chapter 09, page 217) */
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
#define WALK_DISTANCE ('Z' - 'A' + 1)

void generate_random_walk(char walk[SIDE][SIDE]);
void print_array(char walk[SIDE][SIDE]);

int main(void)
  {
    char walk[SIDE][SIDE];
    generate_random_walk(walk);
    print_array(walk);

    return 0;
  }

void generate_random_walk(char walk[SIDE][SIDE])
  {
    char ch = 'A'; /* start alphabet */
    int position[DIRECTION], x = 0, y = 0, nums_of_selection; /* initial direct and position */

    /* walk initializer */
    for (int i = 0; i < SIDE; i++)
      for (int j = 0; j < SIDE; j++)
        walk[i][j] = '.';
    walk[y][x] = ch;

    /* random initializer */
    srand((unsigned) time(NULL));

    /* main logic */
    for (int i = 0; i < WALK_DISTANCE - 1; i++) {

      /* initialize */
      nums_of_selection = 0;

      /* get info for effective selection */
      for (int j = 0; j < DIRECTION; j++) {
        switch(j) {
          case UP:
            if (y != 0 && walk[y - 1][x] == '.')
              position[nums_of_selection++] = UP;
            break;
          case DOWN:
            if (y != (SIDE - 1) && walk[y + 1][x] == '.')
              position[nums_of_selection++] = DOWN;
            break;
          case LEFT:
            if (x != 0 && walk[y][x - 1] == '.')
              position[nums_of_selection++] = LEFT;
            break;
          case RIGHT:
            if (x != (SIDE - 1) && walk[y][x + 1] == '.')
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
          walk[--y][x] = ++ch;
          break;
        case DOWN:
          walk[++y][x] = ++ch;
          break;
        case LEFT:
          walk[y][--x] = ++ch;
          break;
        case RIGHT:
          walk[y][++x] = ++ch;
          break;
      }
    }
  }

void print_array(char walk[SIDE][SIDE])
  {
    /* show result */
    for (int i = 0; i < SIDE; i++) {
      for (int j = 0; j < SIDE; j++)
        printf("%2c", walk[i][j]);
      printf("\n");
    }
  }

