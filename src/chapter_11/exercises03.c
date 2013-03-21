/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises03.c (Chapter 11, page 255) */

#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
  double avg, sum;
  avg_sum((double []) {1.0, 2.0, 3.0}, 3, &avg, &sum);
  printf("avarage is %.2f, summary is %.2f\n", avg, sum);

  return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
  int i;
  *sum = 0.0; /* WRONG: sum = 0.0 */
  for (i = 0; i < n; i++)
    *sum += a[i]; /* WRONG: sum += a[i]; */
  *avg = *sum / n; /* WRONG: avg = sum / n; */
}

