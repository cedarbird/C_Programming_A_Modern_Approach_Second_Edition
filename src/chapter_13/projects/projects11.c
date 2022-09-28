/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects11.c (Chapter 13, page 312) */
/* Calculates the average word length for a sentence. */
/* When letter is followed by space or LF, get the word count up.
   continuous space is also considered. */

#include <stdio.h>

#define N 100

int read_line(char str[], int n);
double compute_average_word_length(const char *sentence);

int main(void)
{
  char sentence[N + 1];

  printf("Enter a sentence: ");
  read_line(sentence, N);

  printf("Avarage  word length: %.1f\n",  compute_average_word_length(sentence));

  return 0;
}

double compute_average_word_length(const char *sentence)
{
  int words = 0, letters = 0;
  char ch, previous_ch = ' ';

  do {
    ch = *sentence;
    if (ch  != ' ' && ch != '\0')
      letters++;
    else if (previous_ch != ' ') /* letter is followed by space or LF */
      words++;
    previous_ch = ch;
  } while (*sentence++ != '\0');

  return (double) letters / words;
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

