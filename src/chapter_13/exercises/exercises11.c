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
  char p[10], q[10];
  scanf("%s", p); 
  scanf("%s", q); 
  printf("strcmp result: %d\n", mystrcmp(p, q));

  return 0;
}

int mystrcmp(char *s, char *t)
{
 int ret;
  while (!(ret = (*s - *t)) && *s)  {
    s++;
    t++;
  }
    ;
  return ret;
}

