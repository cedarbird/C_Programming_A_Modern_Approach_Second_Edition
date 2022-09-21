/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects05.c (Chapter 08, page 276) */
/* Reverses a sentence */
/* Multiple continous space is also considered. */

#include <stdio.h>
#include <stdbool.h>

#define LENGTH 80

int main(void)
{
  char ch, terminator = '\0', sentence[LENGTH] = {'\0'}, *p = sentence, *q;

  /* read sentence - end with period, question mark or exlamation point. */
  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    if (ch == '.' || ch == '?' || ch == '!') {
      terminator = ch;
      break;
    }
    *p++ = ch;
  }

  /*adjust last char to space for simpling check condition */
  *p = ' ';

  /* reverse sentence */
  printf("Reversal of sentence: ");
  while (p >= sentence) {
    if (*p != ' ' && (p == sentence || *(p-1) == ' ')) {
      q = p;
      while (*q != ' ')
        putchar(*q++);
      putchar(' ');
    }
    p--;
  }
  printf("\b%c\n", terminator);

  return 0;
}

