/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects11.c (Chapter 05, page 97) */
/* Prints the English word for the two-digit number entered by user */
/* The following script test all effective two-digit number (10 - 99)
   for num in `seq 10 99`; do echo $num | bin/projects11 && echo $num; done */

#include <stdio.h>

int main(void)
{
  int digit_in_tens, digit_in_ones;

  printf("Enter a two-digit: ");
  scanf("%1d%1d", &digit_in_tens, &digit_in_ones);
  printf("You enterd the number ");

  /* Prints digit_in_tens from 2 to 9, assume digit_in_tens is not zero. */
  switch (digit_in_tens) {
    case 2: printf("twenty");  break;
    case 3: printf("thirty");  break;
    case 4: printf("forty");   break;
    case 5: printf("fifty");   break;
    case 6: printf("sixty");   break;
    case 7: printf("seventy"); break;
    case 8: printf("eighty");  break;
    case 9: printf("ninety");  break;
  }

  /* Prints digit from 10 to 19 (special case) */
  if (digit_in_tens == 1)
    switch (digit_in_ones) {
      case 0: printf("ten.\n");       break;
      case 1: printf("eleven.\n");    break;
      case 2: printf("twelve.\n");    break;
      case 3: printf("thirteen.\n");  break;
      case 4: printf("fourteen.\n");  break;
      case 5: printf("fifteen.\n");   break;
      case 6: printf("sixteen.\n");   break;
      case 7: printf("seventeen.\n"); break;
      case 8: printf("eighteen.\n");  break;
      case 9: printf("nineteen.\n");  break;
    }
  /* Prints digit in ones */
  else
    switch (digit_in_ones) {
      case 0: printf(".\n");       break;
      case 1: printf("-one.\n");   break;
      case 2: printf("-two.\n");   break;
      case 3: printf("-three.\n"); break;
      case 4: printf("-four.\n");  break;
      case 5: printf("-five.\n");  break;
      case 6: printf("-six.\n");   break;
      case 7: printf("-seven.\n"); break;
      case 8: printf("-eight.\n"); break;
      case 9: printf("-nine.\n");  break;
    }

  return 0;
}

