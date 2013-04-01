/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects14.c (Chapter 13, page 313) */
/* Tests whether two words are anagrams */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LENGTH_ALPHABETS 26
#define NUM_CHARS 20

int read_line(char str[], int n);
bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
  char word1[NUM_CHARS], word2[NUM_CHARS];

  printf("Enter first word: ");
  read_line(word1, NUM_CHARS);
  printf("Enter second word: ");
  read_line(word2, NUM_CHARS);

  if (are_anagrams(word1, word2))
    printf("The words are anagrams.\n");
  else
    printf("The words are not anagrams.\n");

  return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
  int amount_alphas[LENGTH_ALPHABETS] = {0};

  for (; *word1; word1++)
    if (isalpha(*word1))
      amount_alphas[tolower(*word1) - 'a']++;

  for (; *word2; word2++)
    if (isalpha(*word2))
      amount_alphas[tolower(*word2) - 'a']--;

  for (int i = 0; i < LENGTH_ALPHABETS; i++)
    if (amount_alphas[i] != 0) {
      return false;
    }

  return true;
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

