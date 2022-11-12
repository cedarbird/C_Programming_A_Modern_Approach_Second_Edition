/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* stack.c (Chapter 15, page 375) */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h> /* C99 only */
#include "stack.h"

int stack[STACK_SIZE];
int top = 0;

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(int digit)
{
  if(is_full())
    stack_overflow();
  else
    stack[top++] = digit;
}

int pop(void)
{
  if(is_empty())
    stack_underflow();
  else
    return stack[--top];
}

void stack_overflow(void)
{
  printf("Expression is too complex!\n");
  exit(1);
}

void stack_underflow(void)
{
  printf("Not enough operands in expression!\n");
  exit(1);
}

