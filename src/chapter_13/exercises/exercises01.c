/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises01.c (Chapter 13, page 308) */

#include <stdio.h>

int main(void)
{
  printf("%c", '\n'); /* (a) */
//printf("%c", "\n"); /* (b), type mismatch */
//printf("%s", '\n'); /* (c), type mismatch */
  printf("%s", "\n"); /* (d) */
//printf('\n');       /* (e), type mismatch */
  printf("\n");       /* (f) */
  putchar('\n');      /* (g) */
//putchar("\n");      /* (h), type mismatch */
//puts('\n');         /* (i), type mismatch */
//puts("\n");         /* (j), two new-line */
  puts("");           /* (k) */

  return 0;
}
