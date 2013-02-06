/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises07.c (Chapter 08, page 178) */
/* Seven-segment LED decimal number display */
/* shorest definition */

#include <stdio.h>

#define DIGITS_OF_DECIMAL 10
#define NUMS_OF_SEGMENT 7

int main(void)
  {
    const int segments[DIGITS_OF_DECIMAL][NUMS_OF_SEGMENT] = {{1, 1, 1, 1, 1, 1},
                                                              {0, 1, 1},
                                                              {1, 1, 0, 1, 1, 0, 1},
                                                              {1, 1, 1, 1, 0, 0, 1},
                                                              {0, 1, 1, 0, 0, 1, 1},
                                                              {1, 0, 1, 1, 0, 1, 1},
                                                              {1, 0, 1, 1, 1, 1, 1},
                                                              {1, 1, 1},
                                                              {1, 1, 1, 1, 1, 1, 1},
                                                              {1, 1, 1, 1, 0, 1, 1}};

    printf("Seven-segment decimal number display:\n");
    for (int i = 0; i < DIGITS_OF_DECIMAL; i++) {
      for (int j = 0; j < NUMS_OF_SEGMENT; j++)
        printf("%2d", segments[i][j]);
      printf("\n");
    }

    return 0;
  }

