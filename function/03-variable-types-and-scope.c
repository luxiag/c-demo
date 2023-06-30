#include <stdio.h>
// file scope
int global_var = 1;

void LocalStaticVar(void) {
    static int static_var;
    int non_static_var;

    printf("static var: %d\n", static_var++);
    printf("no static var: %d\n", non_static_var++);
}

int main(void)
{   
    
    // 自动变量  离开作用域自动销毁
    auto int value = 0;
    { // block scope 
        auto int a = 0;
        printf("%d\n", a);
    }

    if (value > 0)
    {
        int is_value_equals_0 = 0;
    }
    else
    {
    }

    LocalStaticVar();
    LocalStaticVar();
    LocalStaticVar();
    
    return 0;
}