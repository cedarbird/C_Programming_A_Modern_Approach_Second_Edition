/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises16.c (Chapter 13, page 310) */

#include <stdio.h>

int count_spaces(const char *s);

int main(void)
{
  printf("%d\n", count_spaces(" A  B C "));

  return 0;
}

int count_spaces(const char *s)
{
  int count = 0;

  while (*s)
    if (*s++ == ' ')
      count++;
  return count;
}

