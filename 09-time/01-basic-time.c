#include "include/io_utils.h"
#include <sys/timeb.h>
#include <stdio.h>
#include <time.h>

#ifdef __unix__
#include <sys/timeb.h>
#endif

/*
 *
 *
 * */

int main() {
  struct sm;
  struct timespec;
  struct timeb;
#ifdef __unix__
  struct timeval;
#endif


  //获取当前时间戳
  time_t now = time(NULL);
  printf("当前时间戳：%ld\n", now);

  //将时间戳转换为本地时间
  struct tm *local = localtime(&now);
  printf("当前本地时间：%d-%d-%d %d:%d:%d\n", local->tm_year + 1900, local->tm_mon + 1, local->tm_mday, local->tm_hour, local->tm_min, local->tm_sec);

  //将时间戳转换为UTC时间
  struct tm *utc = gmtime(&now);
  printf("当前UTC时间：%d-%d-%d %d:%d:%d\n", utc->tm_year + 1900, utc->tm_mon + 1, utc->tm_mday, utc->tm_hour, utc->tm_min, utc->tm_sec);

  //将本地时间转换为时间戳
  time_t local_to_now = mktime(local);
  printf("本地时间转换为时间戳：%ld\n", local_to_now);

  //将UTC时间转换为时间戳
  time_t utc_to_now = mktime(utc);
  printf("UTC时间转换为时间戳：%ld\n", utc_to_now);

  //将时间戳转换为字符串格式
  char *str_time = ctime(&now);
  printf("当前时间字符串：%s", str_time);

  //将本地时间按照指定格式转换为字符串
  char buf[64];
  strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", local);
  printf("当前本地时间字符串：%s\n", buf);
  return 0;
}