/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises05.c (Chapter 8, page 177) */
/* fibonacci number */

#include <stdio.h>
#define N 40 

int main(void)
  {
    int fibonacci[N] = { 0, 1 };
  
    printf("%10d%10d\n", 1, fibonacci[0]);
    printf("%10d%10d\n", 2, fibonacci[1]);
  
    for (int i = 2; i < N; i++) {
      fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
      printf("%10d%10d\n", i + 1, fibonacci[i]);
    }
  
    return 0;
  }

