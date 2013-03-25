/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects02a.c (Chapter 12, page 275) */
/* Checks whether the message is a palindrome */

#include <stdio.h>
#include <stdbool.h> /* C99 Only */
#include <ctype.h>
#include <stdlib.h>

#define MSG_LEN 80     /* maximum length of message */

int main(void)
{
  char msg[MSG_LEN];
  int end, before, after;
  bool matched;

  printf("Enter a message: ");
  for (end = 0; end < MSG_LEN; end++) {
    msg[end] = getchar();
    if (msg[end] == '\n')
      break;
  }

  for (before = 0, after = end; before < after; before++) {
    if (isalpha(msg[before])) {
      matched = false;
      for (; after >= before; after--) {
        if (isalpha(msg[after])) {
          if (toupper(msg[before]) == toupper(msg[after]))
            matched = true;
          after--;
          break;
        }
      }

      if (!matched) {
        printf("Not a palindrome\n");
        exit(0);
      }
    }
  }

  printf("Palindrome\n");

  return 0;
}

