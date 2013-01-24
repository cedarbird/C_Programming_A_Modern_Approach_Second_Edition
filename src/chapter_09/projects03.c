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

#define Y 10
#define X 10
#define NUMS_OF_DIRECTION 4
#define DISTANCE ('Z' - 'A' + 1)
#define POINT '.'

void generate_random_walk(char walk[Y][X]);
void print_array(char walk[Y][X]);

int main(void)
  {
    char walk[Y][X];

    generate_random_walk(walk);
    print_array(walk);

    return 0;
  }

void generate_random_walk(char walk[Y][X])
  {
    char ch = 'A';
    int i, j, x = 0, y = 0, nums_of_selection;
    int axis[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; /* UP/DOWN/LEFT/RIGHT{y, x} */

    for (i = 0; i < Y; i++)
      for (j = 0; j < X; j++)
        walk[i][j] = POINT;
    walk[y][x] = ch;

    srand((unsigned) time(NULL));
    for (i = 0; i < DISTANCE - 1; i++) {
      nums_of_selection = 0;
      int next_axis[NUMS_OF_DIRECTION];
      for (j = 0; j < NUMS_OF_DIRECTION; j++) {
        if ((x + axis[j][1] >= 0 && x + axis[j][1] < X)
         && (y + axis[j][0] >= 0 && y + axis[j][0] < Y)
         && (walk[y + axis[j][0]][x + axis[j][1]] == POINT))
          next_axis[nums_of_selection++] = j;
      }

      if (nums_of_selection == 0)
        break;

      j = rand() % nums_of_selection;
      walk[(y += axis[next_axis[j]][0])][(x += axis[next_axis[j]][1])] = ++ch;
    }
  }

void print_array(char walk[Y][X])
  {
    int i, j;
    for (i = 0; i < Y; i++) {
      for (j = 0; j < X; j++)
        printf("%2c", walk[i][j]);
      printf("\n");
    }
  }

