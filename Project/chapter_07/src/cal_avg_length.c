/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* cal_avg_length.c (Chapter 7, page 159) */

#include <stdio.h>

int main(void)
  {
    int words = 0, lengths = 0;
    char prech = ' ', ch;

    printf("Enter some word: ");
    do {
      ch = getchar();
      if (ch != ' ' && ch != '\n')
        lengths++;
      else if (prech != ' ')
        words++;
      prech = ch;
    } while (ch != '\n');
 
    printf("Avarage Length is: %.1f\n", (float) lengths / words);

    return 0;
  }

