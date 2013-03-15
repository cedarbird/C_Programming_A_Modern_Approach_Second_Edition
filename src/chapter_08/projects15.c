/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects15.c (Chapter 08, page 180) */
/* Encrypts message with Caesar cipher - attributed by Julius Caesar */
/* Hint: message + shift => encrypted message
         encrypted message + (26 - shift) => message */

#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 80
#define LENGTH_ALPHABETS 26

int main(void)
{
  char ch, message[MAX_LENGTH] = {'\0'}, encrypted[MAX_LENGTH] = {'\0'};
  int length = 0, i, shift_amount;

  printf("Enter message to be encrypted: ");
  while ((ch = getchar()) != '\n')
    message[length++] = ch;

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift_amount);

  /* caesar cipher */
  for (i = 0; i < length; i++) {
    ch = message[i];
    if ('A' <= ch && ch <= 'Z')
      encrypted[i] = ((ch - 'A') + shift_amount) % LENGTH_ALPHABETS + 'A';
    else if ('a' <= ch && ch <= 'z')
      encrypted[i] = ((ch - 'a') + shift_amount) % LENGTH_ALPHABETS + 'a';
    else
      encrypted[i] = ch;
  }

  printf("Encrypted message: ");
  for (i = 0; i < length; i++)
    putchar(encrypted[i]);
  printf("\n");

  return 0;
}

