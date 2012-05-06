/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* print_star.c (Chapter 2, page 33) */

#include <stdio.h>

/*
 * NAME: print_star.c
 * PURPOSE: print a v-type star pattern
 * AUTHOR: bxs
 */
int main(void)
{
  char *star_pattern[] = {
                          "       *\n",
                          "      *\n",
                          "     *\n",
                          "    *\n",
                          "   *\n",
                          "* *\n",
                          " *\n"
                          };
  int i;
  for(i = 0; i < 7; i++) {
    printf("%s", star_pattern[i]);
  }

  return 0;
}
