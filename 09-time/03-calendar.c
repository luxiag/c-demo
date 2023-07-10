#include "include/io_utils.h"
#include "include/time_utils.h"

#include <time.h>


int main(){
  time_t current_time;
  time(&current_time);

  struct tm *calender_time = localtime(&current_time);

  PRINT_INT(calender_time->tm_year);
  PRINT_INT(calender_time->tm_mon);
  PRINT_INT(calender_time->tm_mday);
  PRINT_INT(calender_time->tm_hour);
  PRINT_INT(calender_time->tm_min);
  PRINT_INT(calender_time->tm_sec);
}