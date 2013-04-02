/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects12.c (Chapter 13, page 313) */
/* Reverses a sentence */
/* Multiple continous space is also considered. */

#include <stdio.h>
#include <stdbool.h>

#define MAX_WORDS 30
#define MAX_CHARS 20

char read_word(char *word);

int main(void)
{
  char terminator, words[MAX_WORDS][MAX_CHARS + 1];
  int num_words;

  /* read sentence - end with period, question mark or exlamation point. */
  printf("Enter a sentence: ");
  for (num_words = 0; num_words < MAX_WORDS; num_words++)
    if (terminator = read_word(words[num_words]))
      break;

  /* reverse sentence */
  printf("Reversal of sentence: ");
  for (; num_words >= 0; num_words--)
    printf("%s ", words[num_words]);
  printf("%c\n", terminator);

  return 0;
}

char read_word(char *word)
{
  char ch;

  /* Skips precede space */
  while ((ch = getchar()) == ' ')
    ;

  *word++ = ch;

  for (;;) {
    ch = getchar();
    if (ch == '.' || ch == '?' || ch == '!' || ch == '\n') {
      *word = '\0';
      break;
    } else if (ch == ' ') {
      *word = ch = '\0';
      break;
    } else {
      *word++ = ch;
    }
  }

  return ch;
}

