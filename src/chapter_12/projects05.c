/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects05.c (Chapter 12, page 276) */
/* Reverses a sentence */
/* Multiple continous space is also considered. */

#include <stdio.h>
#include <stdbool.h>

#define LENGTH 80

int main(void)
{
  char ch, terminator = '\0', sentence[LENGTH] = {'\0'};
  char *p = sentence, *q, *word_ending = sentence + LENGTH - 1;

  /* read sentence - end with period, question mark or exlamation point. */
  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n' && p < sentence + LENGTH) {
    if (ch == '.' || ch == '?' || ch == '!')
      terminator = ch;
    else if (ch != ' ')
      word_ending = p;
    *p++ = ch;
  }

  /* reverse sentence */
  printf("Reversal of sentence: ");
  for (p = word_ending; p >= sentence; p--) {
    if (*p == ' ') {
      for (q = p + 1; q <= word_ending; q++)
        putchar(*q);
      putchar(' ');
      word_ending = p - 1;
    } else if (p == sentence)
      for (q = sentence; q <= word_ending; q++)
        putchar(*q);
  }
  printf("%c\n", terminator);

  return 0;
}

