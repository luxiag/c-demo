
#include <stdio.h>
void Echo(){
  char buffer[1024];
  while (1) {
    if(!fgets(buffer,4,stdin)) {
      break ;
    }
    puts(buffer);
//    int next_input = getchar();
//    if(next_input == EOF) {
//      break ;
//    }else if (next_input == '\n') {
//      continue ;
//    }
//    putchar(next_input);
//    putchar('\n');
  }
}

int main(){
  Echo();
  return 0;
}