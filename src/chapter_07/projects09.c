/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects09.c (Chapter 07, page 158) */
/* Converts a 12-hour time to 24-hour form. */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int hours, minutes;
  char ch;

  printf("Enter a 12-hour time: ");
  scanf("%d :%d %c", &hours, &minutes, &ch);
  /* while (getchar() != '\n'); -> advoid abnormal read error */

  /* Adjusts time */
  if (toupper(ch) == 'A' && hours == 12) hours -= 12;
  if (toupper(ch) == 'P' && hours != 12) hours += 12;

  printf("Equivalment 24-hour time: %.2d:%.2d\n", hours, minutes);

  return 0;
}

