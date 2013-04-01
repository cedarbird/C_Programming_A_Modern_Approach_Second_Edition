/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects16.c (Chapter 13, page 313) */
/* Reverses a message */

#include <stdio.h>
#include <string.h>

#define MSG_LEN 80     /* maximum length of message */

int read_line(char str[], int n);
void reverse(char *messages);

int main(void)
{
  char msg[MSG_LEN];

  printf("Enter a message: ");
  read_line(msg, MSG_LEN);

  reverse(msg);

  printf("Reversal is: %s\n", msg);

  return 0;
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

void reverse(char *messages)
{
  char *first = messages, *last = messages + strlen(messages) - 1, temp;
  for (; first < last; first++, last--) {
    temp = *first;
    *first = *last;
    *last = temp;
  }
}

