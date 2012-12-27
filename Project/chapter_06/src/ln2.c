/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* ln.c (Chapter 6, page 123) */

#include <stdio.h>

int main(void)
{
  double e = 1.0f, a, term;

  printf("Enter term: ");
  scanf("%lf", &term);
  for (int i = 1; ; i++) {
    a = 1.0f;
    for (int j = 1; j <= i; j++)
      a *= j;
    if (1/a <= term)
      break;
    e += 1/a;
  }
  printf("the e is %10.9f.\n", e);

  return 0;
}

