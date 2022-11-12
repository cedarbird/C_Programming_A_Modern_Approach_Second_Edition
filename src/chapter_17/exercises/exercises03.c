/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises03.c (Chapter 17, page 453) */
/* create dynamic integer array */

#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value);

int main(void)
{
  int *intArr = create_array(10, 7);
  for (int i = 0; i < 10; i++)
    printf("%d : %d\n", i, *(intArr+i));
  return 0;
}

int *create_array(int n, int initial_value)
{
  int *array = malloc(n * sizeof(int));
  if (array == NULL)
    return NULL;
  for (int * p = array; p < array + n; p++)
    *p = initial_value;
  return array;
}

