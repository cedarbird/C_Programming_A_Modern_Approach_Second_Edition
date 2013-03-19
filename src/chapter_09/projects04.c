/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects04.c (Chapter 09, page 217) */
/* Tests whether two words are anagrams */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define NUM_ALPHABETS 26

void read_word(int counts[NUM_ALPHABETS]);
int equal_array(int counts1[NUM_ALPHABETS], int counts2[NUM_ALPHABETS]);

int main(void)
{
  int counts1[NUM_ALPHABETS] = {0}, counts2[NUM_ALPHABETS] = {0};

  read_word(counts1);
  read_word(counts2);

  if (equal_array(counts1, counts2))
    printf("The words are anagrams.\n");
  else
    printf("The words are not anagrams.\n");

  return 0;
}

void read_word(int counts[NUM_ALPHABETS])
{
  char ch;
  printf("Enter a word: ");
  while ((ch = getchar()) != '\n')
    if (isalpha(ch))
      counts[tolower(ch) - 'a']++;
}

int equal_array(int counts1[NUM_ALPHABETS], int counts2[NUM_ALPHABETS])
{
  int i;
  for (i = 0; i < NUM_ALPHABETS; i++)
    if (counts1[i] != counts2[i])
      return false;
  return true;
}

