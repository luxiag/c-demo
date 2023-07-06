#include "include/io_utils.h"
#include <stdio.h>

int main(){
  {
    int a = 2;
    int *p = &a;

    PRINT_INT(p+1);
    PRINT_INT(p);
    PRINT_INT(sizeof (int));
  }

  {
    double a = 2;
    double *p = &a;
    double *pp = &p;

    PRINT_INT(p+1);
    PRINT_INT(p);
    PRINT_INT(*pp);
    PRINT_INT(sizeof (int));
  }

  {
    int array[] = {0,1,2,3,4};
    int *p = array;
    PRINT_INT(*(p+3));
    PRINT_INT(*(array+3));
    PRINT_INT(array[3]);
    PRINT_INT(p[3]);
  }
}