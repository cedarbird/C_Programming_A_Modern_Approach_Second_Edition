/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects02b.c (Chapter 12, page 275) */
/* Checks whether the message is a palindrome */

#include <stdio.h>
#include <stdbool.h> /* C99 Only */
#include <ctype.h>
#include <stdlib.h>

#define MSG_LEN 80     /* maximum length of message */

int main(void)
{
  char msg[MSG_LEN], ch;
  char *before = &msg[0], *after = &msg[0];
  bool matched = true;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n')
    if (isalpha(ch))
      *after++ = tolower(ch);

  /* adjust for pointing last char */
  after--;
  while (before < after) {
    if (*before++ != *after--) {
      matched = false;
      break;
    }
  }

  if (matched)
    printf("Palindrome\n");
  else
    printf("Not a palindrome\n");

  return 0;
}

