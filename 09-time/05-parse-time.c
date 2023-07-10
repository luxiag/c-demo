#define _XOPEN_SOURCE

#include "include/io_utils.h"
#include "include/time_utils.h"
#include <time.h>

void parse_time() {
  // 定义一个字符串
  char *str_time = "2022-01-10 11:30:19";
  // 定义一些变量
  int year, month, day, hour, minute, second;
  // 使用sscanf()函数将字符串分解为变量
  sscanf(str_time, "%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute,
         &second);
  // 定义一个tm结构体，并用变量初始化
  struct tm stm;
  stm.tm_year = year - 1900;
  stm.tm_mon = month - 1;
  stm.tm_mday = day;
  stm.tm_hour = hour;
  stm.tm_min = minute;
  stm.tm_sec = second;
  stm.tm_isdst = 0;
  // 使用mktime()函数将tm结构体转换为时间戳
  time_t timestamp = mktime(&stm);
  // 打印结果
  printf("字符串：%s\n", str_time);
  printf("时间戳：%ld\n", timestamp);
}

void parse_time2() {
  // 定义一个字符串
  char *str_time = "2022-01-10 11:30:19";
  // 定义一个tm结构体
  struct tm stm;
  // 使用strptime()函数将字符串转换为tm结构体
  strptime(str_time, "%Y-%m-%d %H:%M:%S", &stm);
  // 使用mktime()函数将tm结构体转换为时间戳
  time_t timestamp = mktime(&stm);
  // 打印结果
  printf("字符串：%s\n", str_time);
  printf("时间戳：%ld\n", timestamp);
}

int main() {
  //  time_t current_time;
  //  time(&current_time);
  //
  //  struct tm *calender_time = localtime(&current_time);
  //  char current_time_s[15];
  //  size_t size = strftime(current_time_s,20,"%F %T",calender_time);
  //  PRINT_INT(size);
  ////  puts(current_time_s);
  //
  //  char *time = "2020-11-10 06:30:32.123";
  //  struct tm parsed_time;
  //  char *unparsed_string = strptime(time,"%F %T", &parsed_time);
  //  puts(unparsed_string);
  //  sscanf(unparsed_)
  parse_time();
  parse_time2();
  return 0;
}