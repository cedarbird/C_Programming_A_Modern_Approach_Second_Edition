/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises14.c (Chapter 09, page 215) */
/* check source error */

#include <stdio.h>
#include <stdbool.h>

bool has_zero(int [], int);

int main(void)
{
  int x, y, z;
  bool haszero;
  printf("Enter 3 number: ");
  scanf("%d%d%d", &x, &y, &z);
  haszero = has_zero((int []){x, y, z}, 3);
  if (haszero)
    printf("has zero in %d %d %d\n", x, y, z);
  else
    printf("has no zero in %d %d %d\n", x, y, z);

  return 0;
}

bool has_zero(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    if (a[i] == 0)
      return true;
/*  else  ==>wrong line<== */
      return false;  /* should shift to left by 4 spaces */
}

