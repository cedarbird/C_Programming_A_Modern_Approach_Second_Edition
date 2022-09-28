/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects07.c (Chapter 13, page 312) */
/* Prints the English word for the two-digit number entered by user */
/* The following script test all effective two-digit number (10 - 99)
   for num in `seq 10 99`; do echo $num | bin/projects07 && echo $num; done */

#include <stdio.h>

int main(void)
{
  int digit_in_tens, digit_in_ones;
  const char *ten_names[] = {
                             "twenty",
                             "thirty",
                             "forty",
                             "fifty",
                             "sixty",
                             "seventy",
                             "eighty",
                             "ninety"
                            },
             *one_names[] = {
                             "one",
                             "two",
                             "three",
                             "four",
                             "five",
                             "six",
                             "seven",
                             "eight",
                             "nine"
                            },
             *uni_names[] = {         /* 10 - 19 */
                             "ten",
                             "eleven",
                             "twelve",
                             "thirteen",
                             "fourteen",
                             "fifteen",
                             "sixteen",
                             "seventeen",
                             "eighteen",
                             "nineteen"
                            };

  printf("Enter a two-digit: ");
  scanf("%1d%1d", &digit_in_tens, &digit_in_ones);
  printf("You enterd the number ");

  if (digit_in_tens == 1)
    printf("%s.\n", *(uni_names + digit_in_ones));
  else if (digit_in_ones == 0)
    printf("%s.\n", *(ten_names + digit_in_tens - 2));
  else
    printf("%s-%s.\n", *(ten_names + digit_in_tens - 2), *(one_names + digit_in_ones - 1));

  return 0;
}

