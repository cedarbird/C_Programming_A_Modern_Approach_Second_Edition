/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises16.c (Chapter 12, page 275) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_largest(int *a, int n);
void initial_temperatures(int *p, int n);

int main(void)
{
  int temperatures[7][24];

  initial_temperatures(&temperatures[0][0], 7 * 24);

  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 24; j++)
      printf("%3d", temperatures[i][j]);
    printf("\n");
  }

  for (int i = 0; i < 7; i++)
    printf("%d\n", find_largest(temperatures[i], 24));

  return 0;
}

void initial_temperatures(int *a, int n)
{
  int *p = a;
  srand((unsigned) time(NULL));

  for ( p = a; p < a + n; p++)
    *p = rand() % 30;
}

int find_largest(int *a, int n)
{
  int *p = a, max = *p;

  while (p < a + n) {
    if (*p > max)
      max = *p;
    p++;
  }

  return max;
}

