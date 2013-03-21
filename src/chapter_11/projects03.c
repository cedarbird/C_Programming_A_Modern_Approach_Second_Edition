/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* projects03.c (Chapter 10, page 239) */
/* Classifies a poker hand */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 5
#define RANK 0
#define SUIT 1

/* external variables */
int hand[NUM_CARDS][2];
/*    0    1
    ____ ____
 0 |____|____|
 1 |____|____|
 2 |____|____|
 3 |____|____|
 4 |____|____|
    rank suit
*/

bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/
int main(void)
{
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
}

/**********************************************************
 * read_cards: Reads the cards into the external variable *
 *             hand; checks for bad cards and duplicate   *
 *             cards.                                     *
 **********************************************************/
void read_cards(void)
{
  char ch, rank_ch, suit_ch;
  int i, rank, suit;
  bool bad_card, duplicate_card;
  int cards_read = 0;

  while (cards_read < NUM_CARDS) {
    bad_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();
    switch (rank_ch) {
      case '0':           exit(EXIT_SUCCESS);
      case '2':           rank = 0; break;
      case '3':           rank = 1; break;
      case '4':           rank = 2; break;
      case '5':           rank = 3; break;
      case '6':           rank = 4; break;
      case '7':           rank = 5; break;
      case '8':           rank = 6; break;
      case '9':           rank = 7; break;
      case 't': case 'T': rank = 8; break;
      case 'j': case 'J': rank = 9; break;
      case 'q': case 'Q': rank = 10; break;
      case 'k': case 'K': rank = 11; break;
      case 'a': case 'A': rank = 12; break;
      default:            bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) {
      case 'c': case 'C': suit = 0; break;
      case 'd': case 'D': suit = 1; break;
      case 'h': case 'H': suit = 2; break;
      case 's': case 'S': suit = 3; break;
      default:            bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ') bad_card = true;

    if (bad_card) {
      printf("Bad card; ignored.\n");
      continue;
    }

    duplicate_card = false;
    for (i = 0; i < cards_read; i++)
      if (hand[i][RANK] == rank && hand[i][SUIT] == suit) {
        printf("Duplicate card; ignored.\n");
        duplicate_card = true;
        break;
      }

    if (!duplicate_card) {
      hand[cards_read][RANK] = rank;
      hand[cards_read][SUIT] = suit;
      cards_read++;
    }
  }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(void)
{
  int rank, suit, card, pass, run;

  straight = true;
  flush = true;
  four = false;
  three = false;
  pairs = 0;

  /* sort cards by rank */
  for (pass = 1; pass < NUM_CARDS; pass++)
    for (card = 0; card < NUM_CARDS - pass; card++) {
      rank = hand[card][RANK];
      suit = hand[card][SUIT];
      if (hand[card+1][RANK] < rank) {
        hand[card][RANK] = hand[card+1][RANK];
        hand[card][SUIT] = hand[card+1][SUIT];
        hand[card+1][RANK] = rank;
        hand[card+1][SUIT] = suit;
      }
    }

  /* check for flush */
  suit = hand[0][SUIT];
  for (card = 1; card < NUM_CARDS; card++)
    if (hand[card][SUIT] != suit)
      flush = false;

  /* check for straight */
  for (card = 0; card < NUM_CARDS - 1; card++)
    if (hand[card][RANK] + 1 != hand[card+1][RANK])
      straight = false;

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs by
     looking for "runs" of cards with identical ranks */
  card = 0;
  while (card < NUM_CARDS) {
    rank = hand[card][RANK];
    run = 0;
    do {
      run++;
      card++;
    } while (card < NUM_CARDS && hand[card][RANK] == rank);
    switch (run) {
      case 2: pairs++;      break;
      case 3: three = true; break;
      case 4: four = true;  break;
    }
  }
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(void)
{
  if (straight && flush) printf("Straight flush");
  else if (four)         printf("Four of a kind");
  else if (three &&
           pairs == 1)   printf("Full house");
  else if (flush)        printf("Flush");
  else if (straight)     printf("Straight");
  else if (three)        printf("Three of a kind");
  else if (pairs == 2)   printf("Two pairs");
  else if (pairs == 1)   printf("Pair");
  else                   printf("High card");

  printf("\n\n");
}

