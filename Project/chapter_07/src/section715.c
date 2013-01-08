/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* section715.c (Chapter 7, page 157) */

#include <stdio.h>

int main(void)
  {

    typedef char Int8;
    typedef short Int16;
    typedef int Int32;
    Int8  cha = 'a';
    Int16 sha = 0;
    Int32 ina = 0;
    printf("%zu.\n", sizeof(cha));
    printf("%zu.\n", sizeof(sha));
    printf("%zu.\n", sizeof(ina));

    return 0;
  }

