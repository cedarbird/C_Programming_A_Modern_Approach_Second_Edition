/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/*␣exercises06.c␣(Chapter␣17,␣page␣454)␣*/

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
  struct node *p;

  if (list == NULL)
    return list;

  if (list->value == n) {
    p = list->next;
    free(list);
    return p;
  }

  for (p = list; p != NULL && p->next != NULL && p->next->value != n; p = p->next)
    ;

  if (p != NULL && p->next != NULL) {
    struct node *cur = p->next;
    p->next = p->next->next;
    free(cur);
  }

  return list;
}
