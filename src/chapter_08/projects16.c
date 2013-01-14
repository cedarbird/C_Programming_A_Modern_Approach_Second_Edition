/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects16.c (Chapter 08, page 181) */
/* is anagrams */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LENGTH_OF_ALPHABET ('Z' - 'A' + 1)

int main(void)
  {
    char ch;
    int i, amount_of_alpha[LENGTH_OF_ALPHABET] = {0};
    bool isanagrams = true;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
      if (isalpha(ch))
        amount_of_alpha[tolower(ch) - 'a']++;

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
      if (isalpha(ch))
        amount_of_alpha[tolower(ch) - 'a']--;

    for (i = 0; i < LENGTH_OF_ALPHABET; i++)
      if (amount_of_alpha[i] != 0) {
        isanagrams = false;
        break;
      }

    if (isanagrams)
      printf("The words are anagrams.\n");
    else
      printf("The words are not anagrams.\n");

    return 0;
  }

