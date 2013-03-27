/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises06.c (Chapter 13, page 309) */
/* Note that the short-circuit evaluation of && prevents the if statement from
   testing characters that follow the null character. */

#include <stdio.h>

void censor(char s[]);

int main(void)
{
  char s[] = "food fool.";

  censor(s);

  puts(s);

  return 0;
}

void censor(char s[])
{
  int i;

  for (i = 0; s[i] != '\0'; i++)
    if (s[i] == 'f' && s[i+1] == 'o' && s[i+2] =='o')
      s[i] = s[i+1] = s[i+2] = 'x';
}

