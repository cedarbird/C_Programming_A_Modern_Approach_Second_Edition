/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects05.c (Chapter 13, page 312) */
/* Adds up command-line arguments(which are assumed to be integers) */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sum = 0;

  while (*++argv)
    sum += atoi(*argv);
  printf("Total: %d\n", sum);

  return 0;
}

