/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects01a.c (Chapter 12, page 275) */
/* Reverses a message */

#include <stdio.h>

#define MSG_LEN 80     /* maximum length of message */

int main(void)
{
  char msg[MSG_LEN];
  int i;

  printf("Enter a message: ");
  for (i = 0; i < MSG_LEN; i++) {
    msg[i] = getchar();
    if (msg[i] == '\n')
      break;
  }

  printf("Reversal is: ");
  for (i--; i >= 0; i--)
    putchar(msg[i]);
  putchar('\n');

  return 0;
}

