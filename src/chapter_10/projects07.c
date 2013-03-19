/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects07.c (Chapter 10, page 239) */
/* Shows Seven-segment LED decimal number display */

#include <stdio.h>
#include <ctype.h>

#define NUM_DECIMALS 10
#define NUM_SEGMENTS 7
#define NUM_DIGITS 10
#define HEIGHT 3
#define WIDTH 4

int segments[NUM_DECIMALS][NUM_SEGMENTS] = {{1, 1, 1, 1, 1, 1, 0},
                                            {0, 1, 1, 0, 0, 0, 0},
                                            {1, 1, 0, 1, 1, 0, 1},
                                            {1, 1, 1, 1, 0, 0, 1},
                                            {0, 1, 1, 0, 0, 1, 1},
                                            {1, 0, 1, 1, 0, 1, 1},
                                            {1, 0, 1, 1, 1, 1, 1},
                                            {1, 1, 1, 0, 0, 0, 0},
                                            {1, 1, 1, 1, 1, 1, 1},
                                            {1, 1, 1, 1, 0, 1, 1}};

int display_position[NUM_SEGMENTS][2] = {{0, 1}, {1, 2}, {2, 2},
                                         {2, 1}, {2, 0}, {1, 0}, {1, 1}};

char display_mark[NUM_SEGMENTS] = {'_', '|', '|', '_', '|', '|', '_'};

char digits[HEIGHT][NUM_DIGITS * WIDTH];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
  int index = 0;
  char ch;
  clear_digits_array();
  printf("Enter a number: ");
  while ((ch = getchar()) != '\n' && index < NUM_DIGITS)
    if(isdigit(ch))
      process_digit(ch - '0', index++);
  print_digits_array();

  return 0;
}

/****************************************************************
 * clear_digits_array: Clears Seven-segment LED array.          *
 ****************************************************************/
void clear_digits_array(void)
{
  for (int i = 0; i < HEIGHT; i++)
    for (int j = 0; j < NUM_DIGITS * WIDTH; j++)
      digits[i][j] = ' ';
}

/****************************************************************
 * process_digit: Converts digital to Seven-segment LED mark.   *
 ****************************************************************/
void process_digit(int digit, int position)
{
  for (int i = 0; i < NUM_SEGMENTS; i++)
    if (segments[digit][i] == 1)
      digits[display_position[i][0]][position * WIDTH + display_position[i][1]]
      = display_mark[i];
}

/****************************************************************
 * print_digits_array: Prints Seven-segment LED decimal number. *
 ****************************************************************/
void print_digits_array(void)
{
  int i, j;
  for (i = 0; i < HEIGHT; i++) {
    for (j = 0; j < NUM_DIGITS * WIDTH; j++)
      putchar(digits[i][j]);
    putchar('\n');
  }
}

