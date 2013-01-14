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
    int i = 0, j, sentence_end, word_end;
    bool isword = false;

    /* read sentence */
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
      if (ch == '.' || ch == '?' || ch == '!') {
        terminating_character = ch;
        sentence_end = i - 1;
      }
      sentence[i++] = ch;
    }

    /* main logic */
    printf("Reversal of sentence: ");
    for (i = sentence_end; i >= 0; i--) {
      ch = sentence[i];
      if (ch != ' ') {
        if (!isword) {
          isword = true;
          word_end = i;
        }
        if (i == 0)
          for (j = 0; j <= word_end; j++)
            putchar(sentence[j]);
      }
      else {
        if (isword) {
          isword = false;
          for (j = i + 1; j <= word_end; j++)
            putchar(sentence[j]);
          putchar(' ');
        }
      }
    }

    printf("%c\n", terminating_character);

    return 0;
  }

