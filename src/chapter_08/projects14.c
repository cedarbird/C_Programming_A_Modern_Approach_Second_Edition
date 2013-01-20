/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects14.c (Chapter 08, page 180) */
/* reverse a sentence */

#include <stdio.h>
#include <stdbool.h>

#define LENGTH 80

int main(void)
  {
    char ch, terminating_character, sentence[LENGTH] = {'\0'};
    int i = 0, j, index;

    /* read sentence */
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
      if (ch == '.' || ch == '?' || ch == '!')
        terminating_character = ch;
      else if (ch != ' ')
        index = i;
      sentence[i++] = ch;
    }

    /* main logic */
    printf("Reversal of sentence: ");
    for (i = index; i >= 0; i--) {
      ch = sentence[i];
      if (ch == ' ') {
        for (j = i + 1; j <= index; j++)
          putchar(sentence[j]);
        putchar(' ');
        index = i - 1;
      } else if (i == 0)
        for (j = 0; j <= index; j++)
          putchar(sentence[j]);
    }
    printf("%c\n", terminating_character);

    return 0;
  }
