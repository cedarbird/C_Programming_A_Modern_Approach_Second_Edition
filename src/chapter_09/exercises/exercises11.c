/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises11.c (Chapter 09, page 215) */
/* Computes GPA */

#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n)
{
  int i;
  float sum =0.0f;

  for (i = 0; i < n; i++)
    switch (toupper(grades[i])) {
      case 'A': sum += 4; break;
      case 'B': sum += 3; break;
      case 'C': sum += 2; break;
      case 'D': sum += 1; break;
      /* case 'F': sum += 0.0; break; +0.0 ignore */
    }

  return sum / n;
}

int main(void)
{
  printf("%f\n", compute_GPA((char []){'a', 'B', 'C', 'F', 'd', 'A', 'B'}, 7));

  return 0;
}

