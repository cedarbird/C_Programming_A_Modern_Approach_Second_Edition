/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects09.c (Chapter 13, page 312) */
/* Counts the number of vowels */

#include <stdio.h>
#include <ctype.h>

#define N 100

int read_line(char str[], int n);
int compute_vowel_count(const char *sentence);

int main(void)
{
  char sentence[N + 1];

  printf("Enter a sentence: ");
  read_line(sentence, N);

  printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

  return 0;
}

int compute_vowel_count(const char *sentence)
{
  int count = 0;

  while (*sentence)
    switch (toupper(*sentence++)) {
      case 'A': case 'E': case 'I': case 'O': case 'U':
        count++; break;
    }

  return count;
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}

