/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* convert_alphabetic_phone.c (Chapter 7, page 157) */

#include <stdio.h>

int main(void)
  {
    char ch;
    printf("Enter Phone Number : ");

    do {
      ch = getchar();
      if ( ch >= 'A' && ch <= 'Z')
        if (ch <= 'C')
          putchar('2');
        else if (ch <= 'F')
          putchar('3');
        else if (ch <= 'I')
          putchar('4');
        else if (ch <= 'L')
          putchar('5');
        else if (ch <= 'O')
          putchar('6');
        else if (ch <= 'S')
          putchar('7');
        else if (ch <= 'V')
          putchar('8');
        else
          putchar('9');
      else
        putchar(ch);
    } while (ch != '\n');

    return 0;
  }

