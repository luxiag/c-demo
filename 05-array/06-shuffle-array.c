#include "io_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER_COUNT 50

void SwapElements(int array[], int first, int second) {
  int temp = array[first];
  array[first] = array[second];
  array[second] = temp;
}

void ShuffleArray(int array[], int length) {
  srand((time(NULL)));
  int random_number = rand() % length;
  for (int i = length -1; i > 0; --i) {
    int random_number = rand() % i;
    SwapElements(array,i,random_number);
  }
}

int main() {

  int players[PLAYER_COUNT];
  for (int i = 0; i < 50; ++i) {
    players[i] = i;
  }
  PRINT_INT_ARRAY(players,PLAYER_COUNT);
  ShuffleArray(players,PLAYER_COUNT);
  PRINT_INT_ARRAY(players,PLAYER_COUNT);
  return 0;
}