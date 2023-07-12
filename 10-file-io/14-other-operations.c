
#include <locale.h>
#include <stdio.h>
#include <sys/stat.h>
#include "include/io_utils.h"

typedef struct __crt_stdio_stream_data {
  union {
    FILE _public_file;
    char *_ptr;
  };
  char *_base;
  int _cnt;
  long _flags;
  long _file;
  int _charbuf;
  int _bufsize;
  char *_tmpfname;
} WinFile;

long GetFileSize(char const *filename) {
  struct stat st;
  stat(filename, &st);
  //  struct _stat64 stat_64;
  return st.st_size;
}

int IsDirectory(char const *filename) {
  struct stat st;
  stat(filename, &st);
  return st.st_mode & S_IFIFO;
}

int main() {
  //  setlocale(LC_ALL,"zh_CN.utf08");
  //  const char* oldname = "old.txt";
  //  const char* newname = "new.txt";
  //  int result = rename(oldname, newname);
  //  if (result == 0) {
  //    printf("文件重命名成功\n");
  //  } else {
  //    printf("文件重命名失败\n");
  //  }
  //  const char* filename = "file.txt";
  //  int result = remove(filename);
  //  if (result == 0) {
  //    printf("文件删除成功\n");
  //  } else {
  //    printf("文件删除失败\n");
  //  }

  //  FILE *file = tmpfile();
  //  WinFile *win_file = (WinFile *)file;
  //  puts(win_file->_tmpfname);
  //  fclose(file);

  PRINT_LONG(GetFileSize("data/doupochangqiong.txt"));

  return 0;
}