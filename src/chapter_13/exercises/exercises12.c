/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises12.c (Chapter 13, page 309) */

#include <stdio.h>

void get_extension(char *file_name, char *extension);

int main(void)
{
  char file_name[20], extension[20];

  printf("Enter a filename: ");
  scanf("%s", file_name);
  get_extension(file_name, extension);
  printf("Extension: %s\n", extension);

  return 0;
}

void get_extension(char *file_name, char *extension)
{
  while ( *file_name && '.' != *file_name++ )
    ;
  while ((*extension++ = *file_name++))
    ;
}

