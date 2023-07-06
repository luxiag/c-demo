#include <stdio.h>
#include <stdlib.h>
#include "include/io_utils.h"

#define PLAYER_COUNT 10

void InitPoiner(int **ptr,int length,int default_value) {
  *ptr = malloc(sizeof(int) *length );
  for (int i = 0; i < length; ++i) {
    (*ptr)[i] = default_value;
  }
}
/*
 *
 * 忘记在使用完毕之后释放
 * 使用了已经释放的内存
 * 使用了超出边界的内存
 * 改变内存的指针，导致无法正常释放
 *
 * 避免修改指向已分配的内存的指针
 * 对应free之后的指针主动置为NULL
 * 避免将过多的指针指向动态分配的内存
 * 动态内存遵循谁分配谁释放的原则
 * */
int main(){
//  int * players = malloc(sizeof(int) * PLAYER_COUNT);
  int * players;
  InitPoiner(&players, PLAYER_COUNT, 0);//
  players = calloc(PLAYER_COUNT,sizeof(int));
  for (int i = 0; i < PLAYER_COUNT; ++i) {
    PRINT_INT(players[i]);
    players[i] =i;
  }
  PRINT_INT_ARRAY(players,PLAYER_COUNT);

  players = realloc(players,PLAYER_COUNT *2*sizeof(int) );
  PRINT_INT_ARRAY(players,PLAYER_COUNT *2);

  free(players);

  return 0;
}