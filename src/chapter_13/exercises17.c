/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises17.c (Chapter 13, page 310) */

#include <stdio.h>
#include <stdbool.h> /* C99 Only */
#include <ctype.h>
#include <string.h>

bool test_extension(char *file_name, char *extension);

int main(void)
{
  printf("%d\n", test_extension("memo.txt", "TXT"));
  printf("%d\n", test_extension("memotxt", "TXT"));
  printf("%d\n", test_extension("memo.TXT", "TXT"));
  printf("%d\n", test_extension("memo.txtk", "TXT"));

  return 0;
}

bool test_extension(char *file_name, char *extension)
{
  file_name += strlen(file_name) - strlen(extension) - 1;

  if (*file_name++ != '.')
    return false;

  while(*extension)
    if (toupper(*file_name++) != toupper(*extension++))
      return false;

  return true;
}

