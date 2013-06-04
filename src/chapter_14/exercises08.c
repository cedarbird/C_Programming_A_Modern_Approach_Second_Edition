/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises08.c (Chapter 14, page 346) */

#include <stdio.h>
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define LINE_FILE "Line " TOSTRING(__LINE__) " of file " __FILE__

int main(void)
{
  const char *str = LINE_FILE;
  puts(str);

  return 0;
}

