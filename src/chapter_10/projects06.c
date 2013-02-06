/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects06.c (Chapter 10, page 239) */
/* computing RPN expression */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> /* c99 only */

#define STACK_SIZE 100
#define MAX_LENGTH 100

/* external variables */
int rpn[STACK_SIZE];
int top = 0;
bool out_of_range = false;

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

    make_empty();
    printf("Enter an RPN expression: ");
    scanf(" %c", &ch);
    while(ch != '=') {
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
      }
      scanf(" %c", &ch);
    }
    printf("Value of expression: %d", pop());

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
    out_of_range = true;
    printf("stack overflow!\n");
  }

void stack_underflow(void)
  {
    out_of_range = true;
    printf("stack underflow!\n");
  }

