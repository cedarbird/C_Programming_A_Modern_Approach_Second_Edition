/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects15.c (Chapter 13, page 313) */
/* Computes RPN expression */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h> /* C99 only */

#define STACK_SIZE 100
#define MAX_LENGTH 100
#define EXPRESSION_LEN 100

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
int read_line(char str[], int n);
int evaluate_RPN_expression(const char *expression);

int main(void)
{
  char expression[EXPRESSION_LEN];

  printf("Enter an RPN expression: ");
  read_line(expression, EXPRESSION_LEN);

  printf("Value of expression: %d\n", evaluate_RPN_expression(expression));

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

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}

int evaluate_RPN_expression(const char *expression)
{
  const char *p = expression;
  char tmp;
  int result = 0;

  for (; *p != '\0'; p++) {
    if (*p >= '0' && *p <= '9') {
        push(*p - '0');
    } else if (*p == '+') {
      push(pop() + pop());
    } else if (*p == '-') {
      tmp = pop();
      push(pop() - tmp);
    } else if (*p == '*') {
      push(pop() * pop());
    } else if (*p == '/') {
      tmp = pop();
      push(pop() / tmp);
    } else if (*p == '=') {
      result = pop();
    }
  }

  return result;
}

