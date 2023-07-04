#include <stdio.h>;

int main(){
    /*
    只能由字母（包括大写和小写）、数字和下划线（_）组成。
    不能以数字开头。
    长度不能超过63个字符。
    */
    int value;

    int value_init = 3;
    value = 4;
    value_init =5;
    printf("value: %d\n",value);
    value_init = value;

    return 0;
}


