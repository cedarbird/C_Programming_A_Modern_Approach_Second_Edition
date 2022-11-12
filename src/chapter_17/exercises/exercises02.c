/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises02.c (Chapter 17, page 453) */
/* duplicate string */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(const char *s);

int main(void)
{
  char *str = "hello c!\n";
  char *dup = duplicate(str);
  printf("str is: %s\n", dup);
  printf("origin str pointer is: %p\n", str);
  printf("duplicate str pointer is: %p\n", dup);
  return 0;
}

char *duplicate(const char *s)
{
  char *temp = malloc(strlen(s) + 1);

  if (temp == NULL)
    return NULL;

  strcpy(temp, s);
  return temp;
}
