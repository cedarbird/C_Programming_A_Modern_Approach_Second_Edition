/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By XueSong.Bai                                        *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* tel.c (Chapter 03, page 50) */
/* Prints tel */

#include <stdio.h>

int main(void)
{
  int digit1, digit2, digit3;

  printf("Enter phone number [(xxx)]xxx-xxxx]: ");
  scanf("(%d)%d-%d", &digit1, &digit2, &digit3);
  
  printf("you enterd %d.%d.%d\n", digit1, digit2, digit3);

  return 0;
}

