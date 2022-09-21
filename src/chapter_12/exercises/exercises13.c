/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises13.c (Chapter 12, page 274) */

#include <stdio.h>

#define N 10

double ident[N][N];

void initial_matrix(void)
{
  double *p;
  int num_zeros = N;

  for (p = &ident[0][0]; p <= &ident[N-1][N-1]; p++)
    if (num_zeros == N) {
      *p = 1.0;
      num_zeros = 0;
    } else {
      *p = 0.0;
      num_zeros++;
    }
}

int main(void)
{
  initial_matrix();

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      printf("%.2f ", ident[i][j]);
    printf("\n");
  }

  return 0;
}

