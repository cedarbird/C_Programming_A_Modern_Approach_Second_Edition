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
    char convert_table[] = {'2', '2', '2', '3', '3', '3', '4',
                            '4', '4', '5', '5', '5', '6', '6',
                            '6', '7', '7', '7', '7', '8', '8',
                            '8', '9', '9', '9', '9'};
    int index = 0;
    printf("Enter Phone Number : ");

    while ((ch = toupper(getchar())) != '\n')
      if (ch >= 'A' && ch <= 'Z')
        phone_number[index++] = convert_table[toupper(ch) - 'A'];
      else
        phone_number[index++] = ch;

    /* print phone number */
    printf("In numeric form: %s\n", phone_number);

    return 0;
  }

