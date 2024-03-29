/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects03.c (Chapter 09, page 217) */
/* Generates random walk across 10 X 10 array */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Y 10
#define X 10
#define NUMS_OF_DIRECTION 4
#define DISTANCE 26
#define POINT '.'

void generate_random_walk(int n, int m, char [n][m]);
void print_array(int n, int m, char [n][m]);

int main(void)
{
  char walk[Y][X];

  generate_random_walk(Y, X, walk);
  print_array(Y, X, walk);

  return 0;
}

void generate_random_walk(int n, int m, char walk[n][m])
{
  char ch = 'A';
  int i, j, x = 0, y = 0, nums_of_selection;
  int axis[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; /* UP/DOWN/LEFT/RIGHT{y, x} */

  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      walk[i][j] = POINT;
  walk[y][x] = ch;

  srand((unsigned) time(NULL));
  for (i = 0; i < DISTANCE - 1; i++) {
    nums_of_selection = 0;
    int next_axis[NUMS_OF_DIRECTION];
    for (j = 0; j < NUMS_OF_DIRECTION; j++)
      if ((x + axis[j][1] >= 0 && x + axis[j][1] < m)
       && (y + axis[j][0] >= 0 && y + axis[j][0] < n)
       && (walk[y + axis[j][0]][x + axis[j][1]] == POINT))
        next_axis[nums_of_selection++] = j;

    if (nums_of_selection == 0)
      break;

    j = rand() % nums_of_selection;
    y += axis[next_axis[j]][0];
    x += axis[next_axis[j]][1];
    walk[y][x] = ++ch;
  }
}

void print_array(int n, int m, char walk[n][m])
{
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++)
      printf("%2c", walk[i][j]);
    printf("\n");
  }
}

