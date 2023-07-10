#include "include/io_utils.h"
#include "include/time_utils.h"

#include <time.h>
#include


int main(){
//  time_t long_time_in_ms = TimeInMillisecond();
  time_t current_time;
  time(&current_time);

  struct tm *calender_time = localtime(&current_time);

  PRINT_INT(calender_time->tm_year);
  PRINT_INT(calender_time->tm_mon);
  PRINT_INT(calender_time->tm_mday);
  PRINT_INT(calender_time->tm_hour);
  PRINT_INT(calender_time->tm_min);
  PRINT_INT(calender_time->tm_sec);

  puts(asctime(calender_time));
  puts(ctime(&current_time));

  char current_time_s[15];
//  size_t size = strftime(current_time_s, 20, "%Y-%m-%d %H:%M:%S",calender_time);
  size_t size = strftime(current_time_s,20,"%F %T",calender_time);
  PRINT_INT(size);
  puts(current_time_s);
  return 0;
}