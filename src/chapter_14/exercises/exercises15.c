/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises15.c (Chapter 14, page 348) */

#include <stdio.h>

#define SPANISH

int main(void)
{
#if defined(ENGLISH)
  #define MSG "Insert Disk 1"
#elif defined(FRENCH)
  #define MSG "Inserez Le Disque 1"
#elif defined(SPANISH)
  #define MSG "Inserte E1 Disco 1"
#else
  #error No language specified
#endif

  puts(MSG);

  return 0;
}

