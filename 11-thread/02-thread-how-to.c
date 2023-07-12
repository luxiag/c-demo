#include "tinycthread/tinycthread.h"
#include "include/io_utils.h"

int SayHello(char *name) {
  PRINTLNF("Run in new thread[%#x]: Hello, %s", thrd_current(),name);
  return 1;
}

int main(){
  thrd_t new_thread;
  int result = thrd_create(&new_thread, (thrd_start_t) SayHello,"C lang");
  if(result == thrd_success) {
    PRINTLNF("Run in Main thread[%#x],created new_thread[%#x]",thrd_current(),new_thread);
  }else {
    PRINTLNF("Run in Main Thread[%#x],failed to create new_thread",thrd_current());
  }
//  int res;
//  thrd_join(new_thread,&res);
  thrd_detach(new_thread);
  return 0;
}