/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises18.c (Chapter 13, page 311) */

#include <stdio.h>
#include <string.h>

void remove_filename(char *url);

int main(void)
{
  char *url = "http://www.knking.com/index.html";
  remove_filename(url);
  printf("%s\n", url);

  return 0;
}

void remove_filename(char *url)
{
  char *p = url + strlen(url);

  for (; p >= url; p--) {
    if (*p == '/') {
      *p = '\0';
      return;
    }
  }
}

