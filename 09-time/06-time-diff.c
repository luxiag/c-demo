#include <stdio.h>
#include <time.h>

long time_diff() {
  // 定义两个字符串
  char *str_time1 = "2022-01-10 11:30:19.123456789";
  char *str_time2 = "2022-01-10 11:30:20.987654321";
  // 定义两个tm结构体
  struct tm tm1, tm2;
  // 定义两个时间戳
  time_t t1, t2;
  // 定义两个纳秒数
  long ns1, ns2;
  // 使用strptime()函数将字符串转换为tm结构体
  strptime(str_time1, "%Y-%m-%d %H:%M:%S", &tm1);
  strptime(str_time2, "%Y-%m-%d %H:%M:%S", &tm2);
  // 使用mktime()函数将tm结构体转换为时间戳
  t1 = mktime(&tm1);
  t2 = mktime(&tm2);
  // 使用sscanf()函数将字符串中的纳秒部分分离出来
  sscanf(str_time1, "%*s.%ld", &ns1);
  sscanf(str_time2, "%*s.%ld", &ns2);
  // 计算两个字符串之间的时间差，单位为纳秒
  long diff_ns = (t2 - t1) * 1000000000 + (ns2 - ns1);
  // 打印结果
  printf("两个字符串之间的时间差为：%ld 纳秒\n", diff_ns);
  // 计算两个字符串之间的时间差，单位为微秒
  long diff_us = (t2 - t1) * 1000000 + (ns2 - ns1) / 1000;
  // 打印结果
  printf("两个字符串之间的时间差为：%ld 微秒\n", diff_us);
  return diff_ns;
}

long time_diff2() {
  // 定义两个字符串
  char *str_time1 = "11:30:19.123456789";
  char *str_time2 = "11:30:20.987654321";
  // 定义一些变量
  int hour1, hour2, minute1, minute2, second1, second2;
  long ns1, ns2;
  // 使用sscanf()函数将字符串分解为变量
  sscanf(str_time1, "%d:%d:%d.%ld", &hour1, &minute1, &second1, &ns1);
  sscanf(str_time2, "%d:%d:%d.%ld", &hour2, &minute2, &second2, &ns2);
  // 计算两个字符串之间的时间差，单位为纳秒
  long diff_ns = ((hour2 - hour1) * 3600 + (minute2 - minute1) * 60 +
                  (second2 - second1)) *
                     1000000000 +
                 (ns2 - ns1);
  // 打印结果
  printf("两个字符串之间的时间差为：%ld 纳秒\n", diff_ns);
  // 计算两个字符串之间的时间差，单位为微秒
  long diff_us = ((hour2 - hour1) * 3600 + (minute2 - minute1) * 60 +
                  (second2 - second1)) *
                     1000000 +
                 (ns2 - ns1) / 1000;
  // 打印结果
  printf("两个字符串之间的时间差为：%ld 微秒\n", diff_us);
}

int main() {
  /*
   * clock() 返回的是处理器消耗的时间，更能真实的放映程序运行的耗时
   *
   * time()返回的是系统时间，更合适描述真实世界的时间变化
   *
   * */

  time_diff();
  time_diff2();

  return 0;
}