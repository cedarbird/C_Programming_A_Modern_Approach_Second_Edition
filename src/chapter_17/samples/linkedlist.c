/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* linkedlist.c (Chapter 17, page 425) */

#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *add_to_list(struct node *list, int n);
struct node *search_list(struct node *list, int n);
void print_list(struct node *list);
struct node *delete_from_list(struct node *list, int n);


int main(void)
{
  struct node *list = NULL;

  list = add_to_list(list, 1);
  list = add_to_list(list, 2);
  list = add_to_list(list, 3);
  print_list(list);
  list = delete_from_list(list ,2);
  print_list(list);
  list = delete_from_list(list, 1);
  print_list(list);
  list = delete_from_list(list, 3);
  print_list(list);
  list = delete_from_list(list, 2);
  print_list(list);

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

void print_list(struct node *list)
{
  for(struct node *p = list; p != NULL; p = p->next)
    printf("value:pointer -> %d:%p\n", p->value, (void *)p);
  printf("\n");
}

struct node *search_list(struct node *list, int n)
{
  struct node *p;
  for(p = list; p != NULL; p = p->next)
    if (p->value == n)
      printf("searched pointer: %p\n", (void *)p);
  return p;
}

struct node *delete_from_list(struct node *list, int n)
{
  struct node *cur, *prev;

  for (cur = list, prev = NULL;
       cur != NULL && cur->value != n;
       prev = cur, cur = cur->next)
    ;

  if (cur == NULL)
    return list;
  if (prev == NULL)
    list = list -> next;
  else
    prev->next = cur->next;
  free(cur);
  return list;
}
