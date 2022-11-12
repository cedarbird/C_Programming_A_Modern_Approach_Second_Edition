/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/*␣exercises08.c␣(Chapter␣17,␣page␣454)␣*/
/* 8. [was #10; modified] */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#include "../common/stack.h"

struct node {
  int value;
  struct node *next;
};

struct node *top = NULL;

void make_empty(void)
{
  struct node *temp;

  while (top != NULL) {
    temp = top;
    top = top->next;
    free(temp);
  }
}

bool is_empty(void)
{
  return top == NULL;
}

bool push(int i)
{
  struct node *new_node;

  new_node = malloc(sizeof(struct node));
  if (new_node == NULL)
    return false;

  new_node->value = i;
  new_node->next = top;
  top = new_node;

  return true;
}

int pop(void)
{
  struct node *temp;
  int i;

  if (is_empty()) {
    printf("*** Stack underflow; program terminated. ***\n");
    exit(EXIT_FAILURE);
  }

  i = top->value;
  temp = top;
  top = top->next;
  free(temp);

  return i;
}

int main(void)
{
  push(10);
  push(7);
  push(3);
  printf("%d\n", pop());
  make_empty();

  return 0;
}
