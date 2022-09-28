/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises03.c (Chapter 13, page 308) */

#include <stdio.h>

int main(void)
{
  int i, j;
  char s[10];

  scanf("%d%s%d", &i, s, &j); /* input: 12abc34 56def78 */
  printf("i:[%d]\ns:[%s]\nj:[%d]\n", i, s, j); /* 12	abc34	56 */

  return 0;
}

