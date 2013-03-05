/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects11.c (Chapter 07, page 158) */
/* Displays first name and last name entered by user like this
   last name, a comma, and the first initial, followed by a period. */

#include <stdio.h>

int main(void)
{
  char first_initial, ch;

  printf("Enter a first and last name: ");
  while ((first_initial = getchar()) == ' ') /* read first initial */
    ;

  while (getchar() != ' ')                   /* skip first name */
    ;

  while ((ch = getchar()) != '\n')           /* print last name */
    if (ch != ' ')
      putchar(ch);

  printf(", %c.\n", first_initial);          /* print first initial */

  return 0;
}

