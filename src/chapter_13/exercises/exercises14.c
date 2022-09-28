/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises14.c (Chapter 13, page 310) */
/* result: Grinch */

#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[20] = "Hsjodi", *p;

  for (p = s; *p; p++)
    --*p;
  puts(s);

  return 0;
}

