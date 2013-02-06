/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises01.c (Chapter 10, page 237) */
/* list visible variable and parameter */
/* compile warning */

int a;

void f(int b) /* a,b,c */
  {
    int c;
  }

void g(void) /* a,d */
  {
    int d;
    { /* a,d,e */
      int e;
    }
  }

int main(void) /* a,f */
  {
    int f;
  }

