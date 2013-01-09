/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* calculator.c (Chapter 7, page 158) */

#include <stdio.h>
#include <stdlib.h>

int main(void)
  {
    double sum = 0.0;
    char ch, sign = '\0';
    char num[100] = "";
    int numidx = 0;
  
    printf("Enter a caculator function: ");

    while((ch == getchar()) != '\n') {
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
        sign = ch;
        numidx = 0;
      } else {
        num[numidx++] = ch;
      }
    }

    printf("The result is %f\n", sum);
  
    return 0;
  }

