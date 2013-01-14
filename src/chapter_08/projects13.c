/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects13.c (Chapter 08, page 180) */
/* reverse name */

#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 10

int main(void)
  {
    char ch, first_name[MAX_LENGTH] = {'\0'}, last_name[MAX_LENGTH] = {'\0'};
    bool flag = false; /* non-space character exist */
    int index = 0;

    /* read first name */
    while (!((ch = getchar()) == ' ' && flag)) {
      if (ch != ' ') {
        if (!flag)
          flag = true;
        first_name[index++] = ch;
      }
    }

    index = 0; /* reset index */

    /* read last name */
    while ((ch = getchar()) != '\n') {
      if (ch != ' ')
        last_name[index++] = ch;
    }

    printf("%s, %c\n", last_name, first_name[0]);

    return 0;
  }

