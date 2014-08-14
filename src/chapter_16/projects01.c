/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects01.c (Chapter 16, page 412) */
/* Lookups country codes */

#include <stdio.h>

#define COUNTRY_COUNT ((int) (sizeof(country_codes) / sizeof(country_codes[0])))

struct dialing_code {
  char *country;
  int code;
};

const struct dialing_code country_codes[] =
  {{"Argentina",            54}, {"Bangladesh",      880},
   {"Brazil",               55}, {"Burma (Myanmar)",  95},
   {"China",                86}, {"Colombia",         57},
   {"Congo, Dem. Rep. of", 243}, {"Egypt",            20},
   {"Ethiopia",            251}, {"France",           33},
   {"Germany",              49}, {"India",            91},
   {"Indonesia",            62}, {"Iran",             98},
   {"Italy",                39}, {"Japan",            81},
   {"Mexico",               52}, {"Nigeria",         234},
   {"Pakistan",             92}, {"Philippines",      63},
   {"Poland",               48}, {"Russia",            7},
   {"South Africa",         27}, {"South Korea",      82},
   {"Spain",                34}, {"Sudan",           249},
   {"Thailand",             66}, {"Turkey",           90},
   {"Ukraine",             380}, {"United Kingdom",   44},
   {"United States",         1}, {"Vietnam",          84}};

int main(void)
{
  int code, i;

  printf("Enter dialing code: ");
  scanf("%d", &code);

  for (i = 0; i < COUNTRY_COUNT; i++)
    if (code == country_codes[i].code) {
      printf("The country with dialing code %d is %s\n",
             code, country_codes[i].country);
      return 0;
    }

  printf("No corresponding country found\n");
  return 0;
}

