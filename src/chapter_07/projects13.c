/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects13.c (Chapter 07, page 159) */
/* Calculates the average word length for a sentence. */
/* When letter is followed by space or LF, get the word count up.
   continuous space is also considered. */

#include <stdio.h>

int main(void)
{
  int words = 0, lengths = 0;
  char ch, previous_ch = ' ';

  printf("Enter a sentence: ");
  do {
    ch = getchar();
    if (ch  != ' ' && ch != '\n')
      lengths++;
    else if (previous_ch != ' ') /* letter is followed by space or LF */
      words++;
    previous_ch = ch;
  } while (ch != '\n');

  printf("Avarage  word length: %.1f\n", (float) lengths / words);

  return 0;
}

