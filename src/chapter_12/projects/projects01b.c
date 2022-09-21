/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects01b.c (Chapter 12, page 275) */
/* Reverses a message */

#include <stdio.h>

#define MSG_LEN 80     /* maximum length of message */

int main(void)
{
  char msg[MSG_LEN], *p;

  printf("Enter a message: ");
  for (p = &msg[0]; p < &msg[MSG_LEN]; p++) {
    *p = getchar();
    if (*p == '\n')
      break;
  }

  printf("Reversal is: ");
  for (p--; p >= &msg[0]; p--)
    putchar(*p);
  putchar('\n');

  return 0;
}

