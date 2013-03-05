/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects04.c (Chapter 07, page 157) */
/* Translates an alphabetic phone number into numeric form. */
/* Assumes that any letters entered by the user are upper case. */

#include <stdio.h>

int main(void)
{
  char ch;

  printf("Enter phone number : ");
  do {
    switch (ch = getchar()) {
      case 'A': case 'B': case 'C':           putchar('2'); break;
      case 'D': case 'E': case 'F':           putchar('3'); break;
      case 'G': case 'H': case 'I':           putchar('4'); break;
      case 'J': case 'K': case 'L':           putchar('5'); break;
      case 'M': case 'N': case 'O':           putchar('6'); break;
      case 'P': case 'Q': case 'R': case 'S': putchar('7'); break;
      case 'T': case 'U': case 'V':           putchar('8'); break;
      case 'W': case 'X': case 'Y': case 'Z': putchar('9'); break;
      default:                                putchar(ch);  break;
    }
  } while (ch != '\n');

  return 0;
}

