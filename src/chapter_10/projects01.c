/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects01.c (Chapter 10, page 238) */
/* check whether or not parentheses/braces properly nested */

#include <stdio.h>
#include <stdbool.h> /* c99 only */

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;
bool out_of_range = false;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
  {
    char ch;
    bool is_nested = true;

    printf("Enter parentheses and/or braces: ");
    while((ch = getchar()) != '\n') {
      if (ch == '{' || ch == '(') {
          push(ch);
          if (out_of_range) break;
      } else if (ch == '}') {
        if (pop() != '{' || out_of_range) {
          is_nested = false;
          break;
        }
      } else if (ch == ')')
        if (pop() != '(' || out_of_range) {
          is_nested = false;
          break;
        }
    }

    if (is_nested && top == 0)
      printf("Parentheses/braces are nested properly\n");
    else
      printf("Parentheses/braces are not nested properly\n");

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

void push(char ch)
  {
    if(is_full())
      stack_overflow();
    else
      contents[top++] = ch;
  }

char pop(void)
  {
    if(is_empty())
      stack_underflow();
    else
      return contents[--top];
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

