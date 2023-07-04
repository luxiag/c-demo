#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
  srand(time(NULL));
  int magic_number = rand();
  printf("%d\n",magic_number);
  while(1) {
    int user_input;
    puts("Please input a number:");
    scanf("%d",&user_input);
    if(user_input > magic_number) {
      puts(("your number is bigger!"));
    }else if(user_input < magic_number) {
      puts("Your number is smaller!");
    }else {
      puts("Yes! you got it!");
      break ;
    }
  }
  return 0;
}
