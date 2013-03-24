/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects04.c (Chapter 12, page 276) */
/* Checks whether the message is a palindrome */

#include <stdio.h>
#include <stdbool.h> /* C99 Only */
#include <ctype.h>
#include <stdlib.h>

#define MSG_LEN 80     /* maximum length of message */

int main(void)
{
  char msg[MSG_LEN];
  char *k, *i, *j;
  bool matched;

  printf("Enter a message: ");
  for (k = msg; k < msg + MSG_LEN; k++) {
    *k = getchar();
    if (*k == '\n')
      break;
  }

  for (i = msg, j = k; i <= msg + (k - msg - 1) / 2; i++) {
    if (isalpha(*i)) {
      matched = false;
      for (; j > msg + (k - msg - 1) / 2; j--) {
        if (isalpha(*j)) {
          if (toupper(*i) == toupper(*j)) {
            matched = true;
            j--;
          }
          break;
        }
      }
      if (!matched) {
        printf("Not a Palindrome");
        exit(0);
      }
    }
  }

  printf("Palindrome");

  return 0;
}

