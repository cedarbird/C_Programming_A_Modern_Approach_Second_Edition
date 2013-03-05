/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects12.c (Chapter 07, page 158) */
/* Evaluates an expression from left to right(no perator precedence) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  double result = 0.0;
  char ch, sign;

  printf("Enter an expression: ");

  while((ch = getchar()) != '\n') {
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
      switch(sign) {
        case '+':
          sum += atof(num); break;
        case '-':
          sum -= atof(num); break;
        case '*':
          sum *= atof(num); break;
        case '/':
          sum /= atof(num); break;
      }
      if (sign == '\0')
        sum = atof(num); 
      sign = ch;
      memset(num, 0x00, sizeof(num)); 
      numidx = 0;
    } else {
      num[numidx++] = ch;
    }
  }

  switch(sign) {
    case '+':
      sum += atof(num); break;
    case '-':
      sum -= atof(num); break;
    case '*':
      sum *= atof(num); break;
    case '/':
      sum /= atof(num); break;
  }

  printf("The result is %f\n", sum);

  return 0;
}

