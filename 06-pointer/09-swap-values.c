#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SwapInt(int *a,int *b) {
   int temp =*a;
   *a = *b;
   *a = temp;
}

void Swap(void *first,void *second,size_t size) {
   void *temp = malloc(size);
   if(temp) {
     memcpy(temp,first,size);
     memcpy(first,second,size);
     memcpy(second,temp,size);
     free(temp);
   }else {

   }
}

//#define SWAP(a,b,type) { type temp = a; a=b; b=temp;}
#define SWAP(a,b) do {typeof(a) temp = a; a= b; b= temp;} while(0)

int main(){
   int a = 0;
   int b= 1;

   double x = 3.0;
   double y =4.0;

   SwapInt(&a,&b);
   Swap(&x,&y,sizeof(double ));

//   if(a) SWAP(a,b); else {
//     puts("no swap");
//   }


}