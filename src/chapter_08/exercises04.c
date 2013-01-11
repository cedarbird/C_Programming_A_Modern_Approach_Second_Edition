/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises03.c (Chapter 8, page 177) */

#include <stdio.h>
#include <stdbool.h>
#define NUM_WEEKS 7

int main(void)
  {
    bool weekend[NUM_WEEKS] = { [0]  = true, [6] = true };
    for (int i = 0; i < NUM_WEEKS; i++) {
      if (weekend[i])
        printf(" T ");
      else
        printf(" F ");
    }
    putchar('\n');
  
    return 0;
  }

