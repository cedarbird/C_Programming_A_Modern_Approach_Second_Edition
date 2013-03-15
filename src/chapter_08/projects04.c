/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects04.c (Chapter 08, page 179) */
/* Gets length of array by sizeof */

#include <stdio.h>
#define N 10
#define SIZE ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
  int a[N], i;
  printf("Enter %d numbers: ", N);
  for (i = 0; i < SIZE; i++)
    scanf("%d", &a[i]);

  printf("In reverse order:");
  for (i = SIZE - 1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");

  return 0;
}

