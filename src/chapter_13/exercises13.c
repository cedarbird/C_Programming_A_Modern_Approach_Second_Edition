/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises13.c (Chapter 13, page 310) */

#include <stdio.h>
#include <string.h>

void build_index_url(char *domain, char *index_url);

int main(void)
{
  char domain[20], index_url[100];

  printf("Enter a domain name: ");
  scanf("%s", domain);
  build_index_url(domain, index_url);
  printf("Index url: %s\n", index_url); 

  return 0;
}

void build_index_url(char *domain, char *index_url)
{
  strcat(strcat(strcpy(index_url, "http://www."), domain), "/index.html");
}

