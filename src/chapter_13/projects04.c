/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects04.c (Chapter 13, page 312) */
/* Reverses command-line arguments */

#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;

  for (i = argc - 1; i > 0; i--)
    printf("%s ", argv[i]);
  printf("\n");

  return 0;
}

