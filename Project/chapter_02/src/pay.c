#include <stdio.h>
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

/*
 * name: pay.c
 * purpose: a program to show how to pay the amount using smallest
 * $20, $10, $5 and $1 bills.
 * author: bxs
 */
int main(int argc, char* argv[])
{

  int bill_list[] = { TWENTY, TEN, FIVE, ONE };
  int amount, i, num, len = sizeof(bill_list) / sizeof(int);

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  for(i = 0; i < len; i++) {

    num = amount / bill_list[i];
    printf("$%2d bills: %d\n", bill_list[i], num);
    amount = amount - num * bill_list[i];
  } 

  return 0;
}
