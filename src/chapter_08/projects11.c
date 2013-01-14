/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects11.c (Chapter 08, page 180) */
/* convert alphabetic phone to number */

#include <stdio.h>
#include <ctype.h>

#define MAXLENGHS 15

int main(void)
  {
    char ch, phone_number[MAXLENGHS] = {'\0'};
    int count = 0;
    printf("Enter Phone Number : ");

    do {
      ch = toupper(getchar());
      switch (ch) {
        case 'A': case 'B': case 'C':
          ch = '2'; break;
        case 'D': case 'E': case 'F':
          ch = '3'; break;
        case 'G': case 'H': case 'I':
          ch = '4'; break;
        case 'J': case 'K': case 'L':
          ch = '5'; break;
        case 'M': case 'N': case 'O':
          ch = '6'; break;
        case 'P': case 'Q': case 'R': case 'S':
          ch = '7'; break;
        case 'T': case 'U': case 'V':
          ch = '8'; break;
        case 'W': case 'X': case 'Y': case 'Z':
          ch = '9'; break;
      }

      phone_number[count++] = ch;
    } while (ch != '\n');

    /* print phone number */
    for (int i = 0; i < count; i++)
      putchar(phone_number[i]);

    return 0;
  }

