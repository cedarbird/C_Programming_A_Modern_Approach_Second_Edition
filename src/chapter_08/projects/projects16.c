/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects16.c (Chapter 08, page 181) */
/* Tests whether two words are anagrams */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LENGTH_ALPHABETS 26

int main(void)
{
  char ch;
  int i, amount_alphas[LENGTH_ALPHABETS] = {0};
  bool is_anagrams = true;

  printf("Enter first word: ");
  while ((ch = getchar()) != '\n')
    if (isalpha(ch))
      amount_alphas[tolower(ch) - 'a']++;

  printf("Enter second word: ");
  while ((ch = getchar()) != '\n')
    if (isalpha(ch))
      amount_alphas[tolower(ch) - 'a']--;

  for (i = 0; i < LENGTH_ALPHABETS; i++)
    if (amount_alphas[i] != 0) {
      is_anagrams = false;
      break;
    }

  if (is_anagrams)
    printf("The words are anagrams.\n");
  else
    printf("The words are not anagrams.\n");

  return 0;
}

