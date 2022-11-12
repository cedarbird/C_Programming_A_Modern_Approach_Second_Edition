/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* stack.h (Chapter 15, page 375) */
#include <stdbool.h> /* C99 Only */

#define STACK_SIZE 100
#define MAX_LENGTH 100

void make_empty(void);
bool is_empty(void);
bool is_full(void);
bool push(int digit);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

