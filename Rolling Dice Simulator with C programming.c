#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int rollDice(void);
int playGame(void);

int rollDice(void) {
    return ((rand() % 6) + 1);
}

int playGame(void){
  int dice = 0;
  time_t t;
  srand(time(&t));
  printf("ROLL THE DICE WITH [ENTER]\n");
  dice = rollDice();
      printf("Your roll was %d ,NkC throw dice again.\n", dice);

  return 0;
}

int main (void){
  playGame();
}