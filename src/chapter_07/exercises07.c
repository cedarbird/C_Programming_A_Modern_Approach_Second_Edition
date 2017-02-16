/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises07.c (Chapter 07, page 156)
(a) \b => 10
(b) \n => 12
(c) \r => 15
(d) \t => 11
*/
#include <stdio.h>

int main(void)
{
  printf("%o\n", '\b');
  printf("%o\n", '\n');
  printf("%o\n", '\r');
  printf("%o\n", '\t');

  return 0;
}

