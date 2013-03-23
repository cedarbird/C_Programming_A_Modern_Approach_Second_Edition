/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises14.c (Chapter 12, page 275) */

#include <stdio.h>

void search(const int *a, int n, int temperature, int *pindex, int *num)
{
  const int *p = a;
  int i = 1;

  while (p < a + n) {
    if (temperature == *p++) {
      (*num)++;
      *pindex++ = i;
    }
    i++;
  }
}

int main(void)
{
  int temperatures[7][24] = { [2][3] = 32, [4][19] = 32, [5][21] = 21};
  int index[7][24] = {{0}}, num = 0, *p;

  search(&temperatures[0][0], 168, 32, &index[0][0], &num);

  for (p = &index[0][0]; p < &index[0][0] + num; p++)
    printf("[%d][%d]\n", *p / 24, *p % 24 - 1);

  return 0;
}

