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
    char ch, first_character, last_name[MAX_LENGTH] = {'\0'};
    int index = 0;

    printf("Enter a first and last name: ");

    /* skip prefix space & read first character */
    while ((first_character = getchar()) == ' ')
      ;

    /* skip first name */
    while (getchar() != ' ')
      ;

    /* read last name */
    while ((ch = getchar()) != '\n')
      if (ch != ' ')
        last_name[index++] = ch;

    printf("You entered the name: %s, %c\n", last_name, first_character);
    return 0;
  }

