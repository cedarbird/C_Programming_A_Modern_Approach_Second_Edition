/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects05.c (Chapter 15, page 375) */
/* Computes RPN expression */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h> /* C99 only */
#include "../common/stack.h"

int main(void)
{
  char ch, tmp;

  printf("Enter an RPN expression: ");
  scanf(" %c", &ch);
  while(ch != '\n') {
    if (ch >= '0' && ch <= '9') {
        push(ch - '0');
    } else if (ch == '+') {
      push(pop() + pop());
    } else if (ch == '-') {
      tmp = pop();
      push(pop() - tmp);
    } else if (ch == '*') {
      push(pop() * pop());
    } else if (ch == '/') {
      tmp = pop();
      push(pop() / tmp);
    } else if (ch == '=') {
      printf("Value of expression: %d\n", pop());
      make_empty();
      printf("Enter an RPN expression: ");
    } else {
      break;
    }

    scanf(" %c", &ch);
  }

  return 0;
}

