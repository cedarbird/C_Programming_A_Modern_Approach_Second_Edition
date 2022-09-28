/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises11.c (Chapter 13, page 309) */

#include <stdio.h>

int mystrcmp(char *s, char *t);

int main(void)
{
  printf("abc CMP abC: %d\n", mystrcmp("abc", "abC"));

  return 0;
}

int mystrcmp(char *s, char *t)
{
  for (; *s == *t; s++, t++)
    if (!(*s))
      return 0;
  return *s - *t;
}

