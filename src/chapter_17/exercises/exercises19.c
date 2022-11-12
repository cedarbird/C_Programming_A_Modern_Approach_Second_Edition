/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* exercises19.c (Chapter 17, page 455) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void new_cmd(void);
void exit_cmd(void);
void call(const char *s);

struct {
  char *cmd_name;
  void (*cmd_pointer)(void);
} file_cmd[] =
  { { "new", new_cmd},
    { "exit", exit_cmd}
  };

int main(void)
{
  call("new");
  call("exit");

  return 0;
}

void new_cmd(void)
{
  printf("new_cmd called.\n");
}

void exit_cmd(void)
{
  printf("exit_cmd called.\n");
}

void call(const char *s)
{
  for (int i = 0; i < (int)(sizeof(file_cmd)/sizeof(file_cmd[0])); i++)
    if (!strcmp(s, file_cmd[i].cmd_name))
      file_cmd[i].cmd_pointer();
}
