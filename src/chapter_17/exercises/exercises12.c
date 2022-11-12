/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/*␣exercises11.c␣(Chapter␣17,␣page␣454)␣*/

#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *add_to_list(struct node *list, int n);
struct node *find_last(struct node *list, int n);

int main(void)
{
  struct node *list = NULL;

  list = add_to_list(list, 1);
  list = add_to_list(list, 2);
  list = add_to_list(list, 2);
  list = add_to_list(list, 3);
  list = add_to_list(list, 3);
  list = add_to_list(list, 3);

  printf("%d\n", find_last(list, 2)->value);
  printf("%d\n", find_last(list, 2)->next->value);

  return 0;
}


struct node *add_to_list(struct node *list, int n)
{
  struct node * new_node;
  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    exit(EXIT_FAILURE);
  }
  new_node->value = n;
  new_node->next = list;
  return new_node;
}

struct node *find_last(struct node *list, int n)
{
  struct node *last = NULL;
  for ( struct node *p = list; p != NULL; p=p->next)
    if ( p->value == n)
      last = p;
  return last;
}
