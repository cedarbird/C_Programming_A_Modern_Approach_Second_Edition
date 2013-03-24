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
  int k, i, j;
  bool matched;

  printf("Enter a message: ");
  for (k = 0; k < MSG_LEN; k++) {
    msg[k] = getchar();
    if (msg[k] == '\n')
      break;
  }

  for (i = 0, j = k; i <= (k - 1) / 2; i++) {
    if (isalpha(msg[i])) {
      for (; j > (k - 1) / 2; j--) {
        if (isalpha(msg[j])) {
          if (toupper(msg[i]) != toupper(msg[j])) {
            printf("Not a Palindrome");
            exit(0);
          }
          j--;
          break;
        }
      }
    }
  }

  printf("Palindrome");

  return 0;
}

