#include "include/io_utils.h"
#include <stdio.h>
#include <stdlib.h>

int *(f1(int,double));

int (*f2)(int,double );

int *(*f3)(int,double );

int (*f[])(int,double);

typedef  int (*Func)(int,double );

typedef int Boolean;
typedef int *IntPtr;

void InitPointer(int **ptr,int length,int default_value) {
  *ptr = malloc(sizeof(int) * length);
  for (int i =0; i<length; ++i) {
    (*ptr)[i] = default_value;
  }
}

int main(){
  int a;
  int *p;
  PRINT_HEX(&main);
  PRINT_HEX(&InitPointer);

  void(*func)(int **ptr,int length,int default_value) = &InitPointer;

  func(&p,10,0);
  InitPointer(&p,10,0);

  (*func)(&p,10,0);

  return 0;
}