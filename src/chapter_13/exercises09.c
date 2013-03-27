/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises09.c (Chapter 13, page 309) */
/* result: computers */

#include <stdio.h>
#include <string.h>

int main(void)
{
  char s1[20], s2[20];

  strcpy(s1, "computer");
  strcpy(s2, "science");

  if (strcmp(s1, s2) < 0)
    strcat(s1, s2);
  else
    strcat(s2, s1);

  s1[strlen(s1) - 6] = '\0';

  puts(s1);

  return 0;
}

