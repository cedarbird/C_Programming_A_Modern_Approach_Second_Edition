/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects02.c (Chapter 07, page 157) */
/* Prints a table of squares using a for statement */
/* Pauses after every 24 squares and until presses the Enter key to continue */

#include <stdio.h>

int main(void)
{
  int i, n;
  char ch;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  ch = getchar();
    /* dispose of new-line character following number of entries */
    /* could simply be getchar(); */

  for (i = 1; i <= n; i++) {
    printf("%10d%10d\n", i, i * i);
    if (i % 24 == 0) {
      printf("Press Enter to continue...");
      ch = getchar();   /* or simply getchar(); */
    }
  }

  return 0;
}

