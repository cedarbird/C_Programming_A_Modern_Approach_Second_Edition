/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects07.c (Chapter 07, page 158) */
/* Add, subtract, multiply, divide two fractions by entering a sign */

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  char sign;

  printf("Enter two fractions separated by a sign: ");
  scanf("%d /%d %c%d /%d", &num1, &denom1, &sign, &num2, &denom2);

  switch (sign) {
    case '+':
      result_num = num1 * denom2 + num2 * denom1;
      result_denom = denom1 * denom2;
      printf("The result is %d/%d\n", result_num, result_denom);
      break;
    case '-':
      result_num = num1 * denom2 - num2 * denom1;
      result_denom = denom1 * denom2;
      printf("The result is %d/%d\n", result_num, result_denom);
      break;
    case '*':
      result_num = num1 * num2;
      result_denom = denom1 * denom2;
      printf("The result is %d/%d\n", result_num, result_denom);
      break;
    case '/':
      result_num = num1 * denom2;
      result_denom = denom1 * num2;
      printf("The result is %d/%d\n", result_num, result_denom);
      break;
    default:
      printf("wrong sign (%c)!\n", sign);
      break;
  }

  return 0;
}

