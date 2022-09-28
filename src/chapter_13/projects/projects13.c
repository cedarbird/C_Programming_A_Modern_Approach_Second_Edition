/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects13.c (Chapter 13, page 313) */
/* Encrypts message with Caesar cipher - attributed by Julius Caesar */
/* Hint: message + shift => encrypted message
         encrypted message + (26 - shift) => message */

#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 80
#define LENGTH_ALPHABETS 26

int read_line(char str[], int n);
void encrypt(char *message, int shift);

int main(void)
{
  char message[MAX_LENGTH];
  int shift;

  printf("Enter message to be encrypted: ");
  read_line(message, MAX_LENGTH);

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  encrypt(message, shift);

  printf("Encrypted message: %s\n", message);

  return 0;
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

void encrypt(char *message, int shift)
{
  /* caesar cipher */
  for (; *message; message++) {
    if ('A' <= *message && *message <= 'Z')
      *message = ((*message - 'A') + shift) % LENGTH_ALPHABETS + 'A';
    else if ('a' <= *message && *message <= 'z')
      *message = ((*message - 'a') + shift) % LENGTH_ALPHABETS + 'a';
  }
}

