/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* show_max.c (Chapter 06, page 122) */
/* infinite loop */

#include <stdio.h>

int main(void)
  {
    float input, max = 0.0f;

    do {
      printf("Enter a number: ");
      scanf("%f", &input);
      if (input <= 0.0f)
        break;
      else
        if (input > max)
          max = input;
    } while(1);

    printf("The largest number entered was %f.\n", max); 
      
    return 0;
  }

