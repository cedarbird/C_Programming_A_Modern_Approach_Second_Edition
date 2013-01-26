/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises02.c (Chapter 10, page 238) */
/* list visible variable and parameter */
/* compile warning */

int b, c;

void f(void) /* local b,c,d */
  {
    int b, d;
  }

void g(int a) /* a,b,local c */
  {
    int c;
    { /* block local a,b,function local c,d */
      int a, d;
    }
  }

int main(void) /* b,local c,d */
  {
    int c, d;
  }

