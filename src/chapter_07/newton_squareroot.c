/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* newton_squareroot.c (Chapter 07, page 159) */

#include <stdio.h>
#include <math.h>

#define DIFF 0.00001

int main(void)
  {
    double input, root, guess = 1.0;

    printf("Enter a positive number: ");
    scanf("%lf", &input);

    while(1) {

      root = (guess + (input / guess)) / 2.0;
      if (fabs(root * root - input) <= DIFF)
        break;
      else
        guess = root;
    }

    printf("The square root is %lf\n", root);
  
    return 0;
  }

