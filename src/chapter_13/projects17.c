/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects17.c (Chapter 13, page 313) */
/* Checks whether the message is a palindrome */

#include <stdio.h>
#include <stdbool.h> /* C99 Only */
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MSG_LEN 80     /* maximum length of message */

int read_line(char str[], int n);
bool is_palindrome(const char *messages);

int main(void)
{
  char msg[MSG_LEN];

  printf("Enter a message: ");
  read_line(msg, MSG_LEN);

  if (is_palindrome(msg))
    printf("Palindrome\n");
  else
    printf("Not a palindrome\n");

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

bool is_palindrome(const char *messages)
{
  const char *after = messages + strlen(messages), *before = messages;
  bool matched;

  for (; before < after; before++) {
    if (isalpha(*before)) {
      matched = false;
      for (; after >= before; after--) {
        if (isalpha(*after)) {
          if (toupper(*before) == toupper(*after))
            matched = true;
          after--;
          break;
        }
      }

      if (!matched) {
        return false;
      }
    }
  }

  return true;
}

