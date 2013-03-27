/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises05a.c (Chapter 13, page 309) */

#include <stdio.h>
#include <ctype.h>

char *capitalize(char *s);

int main(void)
{
  char s[] = "abc\tD fg.";

  puts(capitalize(s));

  return 0;
}

char *capitalize(char *s)
{
  char *p = s;

  for (int i = 0; p[i] != '\0'; i++)
    p[i] = toupper(p[i]);

  return p;
}

