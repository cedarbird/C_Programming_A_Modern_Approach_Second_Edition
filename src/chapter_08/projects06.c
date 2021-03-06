/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects06.c (Chapter 08, page 179) */
/* Translates message with b1ff filter */

#include <stdio.h>
#include <ctype.h>

#define NUMS_CHAR 100

int main(void)
{
  char message[NUMS_CHAR] = {'\0'}, ch;
  int length = 0;

  printf("Enter message: ");
  while ((ch = getchar()) != '\n')
    message[length++] = ch;

  printf("In B1FF-speak: ");
  for (int j = 0; j < length; j++) {
    ch = toupper(message[j]);
    switch (ch) {
      case 'A':  putchar('4'); break;
      case 'B':  putchar('8'); break;
      case 'E':  putchar('3'); break;
      case 'I':  putchar('1'); break;
      case 'O':  putchar('0'); break;
      case 'S':  putchar('5'); break;
      default :  putchar(ch);  break;
    }
  }
  printf("!!!!!!!!!!\n");

  return 0;
}

