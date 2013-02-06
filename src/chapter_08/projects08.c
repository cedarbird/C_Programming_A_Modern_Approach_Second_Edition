/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects08.c (Chapter 08, page 179) */
/* summary five quiz grades for five students */

#include <stdio.h>

#define NUM_QUIZZES  5
#define NUM_STUDENTS 5

int main(void)
{
  int grades[NUM_STUDENTS][NUM_QUIZZES];
  int high, low, quiz, student, total;

  for (student = 0; student < NUM_STUDENTS; student++) {
    printf("Enter grades for student %d: ", student + 1);
    for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
      scanf("%d", &grades[student][quiz]);
  }

  printf("\nStudent  Total  Average\n");
  for (student = 0; student < NUM_STUDENTS; student++) {
    printf("%4d      ", student + 1);
    total = 0;
    for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
      total += grades[student][quiz];
    printf("%3d     %3d\n", total, total / NUM_QUIZZES);
  }

  printf("\nQuiz  Average  High  Low\n");
  for (quiz = 0; quiz < NUM_QUIZZES; quiz++) {
    printf("%3d     ", quiz + 1);
    total = 0;
    high = 0;
    low = 100;
    for (student = 0; student < NUM_STUDENTS; student++) {
      total += grades[student][quiz];
      if (grades[student][quiz] > high)
        high = grades[student][quiz];
      if (grades[student][quiz] < low)
        low = grades[student][quiz];
    }
    printf("%3d    %3d   %3d\n", total / NUM_STUDENTS, high, low);
  }

  return 0;
}

