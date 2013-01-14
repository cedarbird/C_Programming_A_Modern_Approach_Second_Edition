/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects15.c (Chapter 08, page 180) */
/* Caesar cipher - attributed by Julius Caesar */
/* Hint: message + shift => encrypted message
         encrypted message + (26 - shift) => message */

#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 80
#define LENGTH_OF_ALPHABET ('Z' - 'A' + 1)

int main(void)
  {
    char ch, message[MAX_LENGTH] = {'\0'}, encrypted_message[MAX_LENGTH] = {'\0'};
    int i = 0, shift_amount;

    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n') {
      message[i++] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    /* caesar cipher */
    for (i = 0; i < MAX_LENGTH; i++) {
      ch = message[i];
      if (ch >= 'A' && ch <= 'Z')
        encrypted_message[i] = ((ch - 'A') + shift_amount) % LENGTH_OF_ALPHABET + 'A';
      else if (ch >= 'a' && ch <= 'z')
        encrypted_message[i] = ((ch - 'a') + shift_amount) % LENGTH_OF_ALPHABET + 'a';
      else
        encrypted_message[i] = ch;
    }

    printf("Encrypted message: %s\n", encrypted_message);

    return 0;
  }

