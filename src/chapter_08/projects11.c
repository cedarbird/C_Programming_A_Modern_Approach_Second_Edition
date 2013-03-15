/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects11.c (Chapter 08, page 180) */
/* Converts alphabetic phone to number */
/* Creates a convert table is also a good method. For Example:
 * A-Z convert table
 * {'2', '2', '2', '3', '3', '3', '4',
 *  '4', '4', '5', '5', '5', '6', '6',
 *  '6', '7', '7', '7', '7', '8', '8',
 *  '8', '9', '9', '9', '9'};
 * Code Snippet:
 * if (ch >= 'A' && ch <= 'Z')
 *   phone_number[index++] = convert_table[toupper(ch) - 'A'];
 */

#include <stdio.h>
#include <ctype.h>

#define MAXLENGHS 15

int main(void)
{
  char ch, phone_number[MAXLENGHS] = {'\0'};
  int i = 0;

  printf("Enter phone number : ");
  while ((ch = toupper(getchar())) != '\n')
    switch (ch) {
      case 'A': case 'B': case 'C':           phone_number[i++] ='2'; break;
      case 'D': case 'E': case 'F':           phone_number[i++] ='3'; break;
      case 'G': case 'H': case 'I':           phone_number[i++] ='4'; break;
      case 'J': case 'K': case 'L':           phone_number[i++] ='5'; break;
      case 'M': case 'N': case 'O':           phone_number[i++] ='6'; break;
      case 'P': case 'Q': case 'R': case 'S': phone_number[i++] ='7'; break;
      case 'T': case 'U': case 'V':           phone_number[i++] ='8'; break;
      case 'W': case 'X': case 'Y': case 'Z': phone_number[i++] ='9'; break;
      default:                                phone_number[i++] =ch;  break;
    }

  /* print phone number */
  printf("In numeric form: ");
  for (i = 0; i < MAXLENGHS; i++)
    putchar(phone_number[i]);
  putchar('\n');

  return 0;
}

