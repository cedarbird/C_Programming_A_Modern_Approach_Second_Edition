/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* show2digit.c (Chapter 05, page 97) */

#include <stdio.h>

int main(void)
  {
    int ten, single;

    printf("Enter a two-digit: ");
    scanf("%1d%1d", &ten, &single);
    printf("You enterd the number ");

    /* ten */
    switch (ten) {
      case 1:
        switch (single) {
          case 0: printf("ten.");       break;
          case 1: printf("eleven.");    break;
          case 2: printf("twelve.");    break;
          case 3: printf("thirteen.");  break;
          case 4: printf("fourteen.");  break;
          case 5: printf("fifteen.");   break;
          case 6: printf("sixteen.");   break;
          case 7: printf("seventeen."); break;
          case 8: printf("eighteen.");  break;
          case 9: printf("nineteen.");  break;
        }
        break;
      case 2: printf("twenty");  break;
      case 3: printf("thirty");  break;
      case 4: printf("forty");   break;
      case 5: printf("fifty");   break;
      case 6: printf("sixty");   break;
      case 7: printf("seventy"); break;
      case 8: printf("eighty");  break;
      case 9: printf("ninety");  break;
    }

    /* single */
    if (ten != 1) {
      switch (single) {
        case 0: printf(".");       break;
        case 1: printf("-one.");   break;
        case 2: printf("-two.");   break;
        case 3: printf("-three."); break;
        case 4: printf("-four.");  break;
        case 5: printf("-five.");  break;
        case 6: printf("-six.");   break;
        case 7: printf("-seven."); break;
        case 8: printf("-eight."); break;
        case 9: printf("-nine.");  break;
      }
    }

    printf("\n");

    return 0;
  }

