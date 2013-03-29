/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects10.c (Chapter 13, page 312) */
/* Displays first name and last name entered by user like this
   last name, a comma, and the first initial, followed by a period. */

#include <stdio.h>
#include <string.h>

#define N 100

int read_line(char str[], int n);
void reverse_name(char *name);

int main(void)
{
  char name[N + 1];

  printf("Enter a first and last name: ");
  read_line(name, N);
  reverse_name(name);
  puts(name);

  return 0;
}

void reverse_name(char *name)
{
  char first_initial[] = ",  .", *p = name;
  while ((first_initial[2] = *p++) == ' ')  /* read first initial */
    ;

  while (*p++ != ' ')                       /* skip first name */
    ;

  for (; *p; p++)                           /* reverse second name */
    if (*p != ' ')
      *name++ = *p;

  strcpy(name, first_initial);
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}

