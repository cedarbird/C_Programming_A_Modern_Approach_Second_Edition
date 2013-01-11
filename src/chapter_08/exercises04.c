/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises03.c (Chapter 08, page 177) */
/* show weekend */
/* designated initializer */

#include <stdio.h>
#include <stdbool.h>

#define DAYS_OF_WEEK 7

int main(void)
  {
    bool weekend[DAYS_OF_WEEK] = { [0] = true, [6] = true };

    printf("Weekend: ");
    for (int i = 0; i < DAYS_OF_WEEK; i++)
      printf("%2d", weekend[i]);
    printf("\n");

    return 0;
  }

