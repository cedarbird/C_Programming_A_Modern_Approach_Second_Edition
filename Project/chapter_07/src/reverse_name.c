/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* reverse_name.c (Chapter 7, page 158) */

#include <stdio.h>

int main(void)
  {
    char first_initial, ch, flag = 0;
    
    do {
      first_initial = getchar();
    } while (first_intial == ' ');

    do {
      ch = getchar();
      if (flag && ch != '\n' && ch != ' ')
        putchar(ch);
      if (ch == ' ') {
        flag = 1;
      }
    } while (ch != '\n');

    printf(", %c\n", first_initial);

    return 0;
  }

