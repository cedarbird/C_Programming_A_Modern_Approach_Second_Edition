/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects01.c (Chapter 13, page 311) */
/* Finds largest and smallest in a series of words */

#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

void read_line(char str[], int n);

int main(void)
{
  char smallest_word[WORD_LEN+1],
       largest_word[WORD_LEN+1],
       current_word[WORD_LEN+1];

  printf("Enter word: ");
  read_line(current_word, WORD_LEN);
  strcpy(smallest_word, strcpy(largest_word, current_word));

  while (strlen(current_word) != 4) {
    printf("Enter word: ");
    read_line(current_word, WORD_LEN);
    if (strcmp(current_word, smallest_word) < 0)
      strcpy(smallest_word, current_word);
    if (strcmp(current_word, largest_word) > 0)
      strcpy(largest_word, current_word);
  }

  printf("\nSmallest word: %s\n", smallest_word);
  printf("Largest word: %s\n", largest_word);

  return 0;
}

