/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects10.c (Chapter 05, page 97) */
/* Converts a numberical grade into a letter grade */

#include <stdio.h>

int main(void)
{
  int grade;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  if (grade < 0 || grade > 100) {
    printf("Illegal grade\n");
    return 0;
  }

  switch (grade / 10) {
    case 10:
    case 9:  printf("Letter grade: A\n");
             break;
    case 8:  printf("Letter grade: B\n");
             break;
    case 7:  printf("Letter grade: C\n");
             break;
    case 6:  printf("Letter grade: D\n");
             break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:  printf("Letter grade: F\n");
             break;
  }

  return 0;
}

