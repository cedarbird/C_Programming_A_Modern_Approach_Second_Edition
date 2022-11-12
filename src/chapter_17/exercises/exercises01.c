/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises01.c (Chapter 17, page 453) */
/* my_malloc */

#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t size);

int main(void)
{
  void *p = my_malloc(100);
  printf("pointer is: %p\n", p);
  return 0;
}

void *my_malloc(size_t size)
{
  void *p = malloc(size);
  if (p == NULL) {
      printf("-- No space left --\n");
      exit(1);
  }
  return p;
}
