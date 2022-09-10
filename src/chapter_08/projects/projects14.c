/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects14.c (Chapter 08, page 180) */
/* Reverses a sentence */
/* Multiple continous space is also considered. */

#include <stdio.h>
#include <stdbool.h>

#define LENGTH 80

int main(void)
{
  char ch, terminator = '\0', sentence[LENGTH] = {'\0'};
  int i = 0, j;

  /* read sentence - end with period, question mark or exlamation point. */
  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    if (ch == '.' || ch == '?' || ch == '!') {
      terminator = ch;
      break;
    }
    sentence[i++] = ch;
  }

  /* reverse sentence */
  printf("Reversal of sentence: ");
  while (i >= 0) {
    if ((sentence[i] != ' ' && sentence[i] != '\0') && (i == 0 || sentence[i-1] == ' ')) {
      j = i;
      while (sentence[j] != ' ' && sentence[j] != '\0')
        putchar(sentence[j++]);
      putchar(' ');
    }
    i--;
  }
  printf("\b%c\n", terminator);

  return 0;
}

