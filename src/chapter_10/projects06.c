/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects06.c (Chapter 10, page 239) */
/* Computes RPN expression */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h> /* C99 only */

#define STACK_SIZE 100
#define MAX_LENGTH 100

/* external variables */
int rpn[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int digit);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

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
    rpn[top++] = digit;
}

int pop(void)
{
  if(is_empty())
    stack_underflow();
  else
    return rpn[--top];
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

