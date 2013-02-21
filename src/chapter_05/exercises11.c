/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises11.c (Chapter 05, page 95) */

#include <stdio.h>

int main(void)
{
  int area_code;

  printf("Enter Area code: ");
  scanf("%d", &area_code);

  switch (area_code) {
    case 229:                               printf("Albany\n");       break;
    case 404: case 470: case 678: case 770: printf("Atlanta\n");      break;
    case 478:                               printf("Macon\n");        break;
    case 706: case 762:                     printf("Columbus\n");     break;
    case 912:                               printf("Savannah\n");     break;
    default: printf("Area code not recognized.\n");                   break;
  }

  return 0;
}

