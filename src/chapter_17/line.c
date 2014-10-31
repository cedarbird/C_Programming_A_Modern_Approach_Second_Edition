/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* line.c (Chapter 17, page 456) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60
#define MAX_WORD_LEN 20

struct word {
  char text[MAX_WORD_LEN+1];
  struct word *next;
};

struct word *line = NULL;

int line_len = 0;
int num_words = 0;

void clear_line(void)
{
  struct word *cur;
  cur = line;
  while (cur != NULL) {
    line = cur->next;
    free(cur);
    cur = line;
  }
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word)
{
  struct word *new_node;
  new_node = malloc(sizeof(struct word));
  strcpy(new_node->text, word);
  new_node->next = line;
  line = new_node;
  line_len += strlen(word) + 1;
  num_words++;
}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
  int extra_spaces, spaces_to_insert, j;
  struct word *cur = line;
  char *p;

  extra_spaces = MAX_LINE_LEN - line_len;
  while (cur != NULL) {
    p = cur->text;
    while (p != NULL)
      putchar(*p++);
    spaces_to_insert = extra_spaces / (num_words - 1);
    for (j = 1; j <= spaces_to_insert + 1; j++)
      putchar(' ');
    extra_spaces -= spaces_to_insert;
    num_words--;
  }
  putchar('\n');
}

void flush_line(void)
{
  struct word *cur = line;
  char *p;
  while (cur != NULL) {
    p = cur->text;
    while (p != NULL)
      putchar(*p++);
    cur = cur->next;
  }
}

