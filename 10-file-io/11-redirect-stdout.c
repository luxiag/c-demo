

#include <stdio.h>
#if defined(__APPLE__) || defined(__linux__)
#include <unistd.h>
#elif defined(_WIN32)
#include <io.h>
#endif



void RedirectStdout(char const *filename) {
  static int saved_stdout_no = -1;

  if(filename) {
    if(saved_stdout_no == -1) {
      saved_stdout_no = dup(fileno(stdout));
      fflush(stdout);
      freopen(filename,"a",stdout);

    }else {
      if(saved_stdout_no != -1) {
        dup2(saved_stdout_no,fileno(stdout));
        close(saved_stdout_no);
        saved_stdout_no = -1;
      }
    }
  }
}

int main(){
  freopen("output.log","a",stdout);
  puts("This will be written to file 'out put.log'");
  fclose(stdout);
  return 0;
}