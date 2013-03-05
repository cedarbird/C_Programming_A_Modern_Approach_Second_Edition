/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects12.c (Chapter 07, page 158) */
/* Evaluates an expression from left to right(no operator precedence) */

#include <stdio.h>

int main(void)
{
  float value, result;
  char ch;

  printf("Enter an expression: ");
  scanf("%f", &result);

  while ((ch = getchar()) != '\n')
    switch (ch) {
      case '+': scanf("%f", &value); result += value; break;
      case '-': scanf("%f", &value); result -= value; break;
      case '*': scanf("%f", &value); result *= value; break;
      case '/': scanf("%f", &value);
        if (value != 0.0f) {
                                     result /= value; break;
        } else {
          printf("can't divide with 0.");
          return 1; /* error exit */
        }
    }

  printf("The result is %f\n", result);

  return 0;
}

