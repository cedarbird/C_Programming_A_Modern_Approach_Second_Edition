/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects06.c (Chapter 17, page 456) */
/* sort some words with qsort */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN 20      /* max length of word */
#define INITIAL_SIZE 5   /* initial size */

int compare_words(const void *w1, const void *w2);
int read_word(char str[], int n);

int main(void)
{
  char **words = NULL, *word = NULL, aword[WORD_LEN+1] = {'\0'};
  int size = INITIAL_SIZE, num_words = 0;

  if ((words = (char **) malloc(size * (size_t)sizeof(char *))) == NULL)
    exit(EXIT_FAILURE);

  for (;;) {
    printf("Enter a word: ");
    read_word(aword, WORD_LEN);
    if ((word = malloc(strlen(aword) + 1)) == NULL)
      exit(EXIT_FAILURE);
    strcpy(word, aword);
    if (word[0] == '\0')
      break;

    *(words + num_words++) = word;

    if (size == num_words)
      if ((words = (char **) realloc(words,
          (size_t)sizeof(char *) * (size *= 2))) == NULL)
        exit(EXIT_FAILURE);
  }

  qsort(words, num_words, sizeof(char *), compare_words);
  printf("\nsorted result: ");

  for (int i = 0; i < num_words; i++)
    printf("%s ", *(words + i));
  printf("\n");

  return 0;
}

int read_word(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}

int compare_words(const void *w1, const void *w2)
{
  return strcmp(*(char **)w1, *(char **)w2);
}

