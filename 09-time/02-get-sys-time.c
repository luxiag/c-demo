#include "include/io_utils.h"
#include "include/time_utils.h"
#include <time.h>

int main() {
  time_t current_time;
  time(&current_time);
  PRINT_LONG(current_time);

  current_time = time(NULL);
  PRINT_LONG(current_time);

  struct timespec tp;
  clock_gettime(CLOCK_REALTIME, &tp);
  long timestamp = tp.tv_sec * 1000000000L + tp.tv_nsec;
  printf("Timestamp: %ld\n", timestamp);

  //  PRINT_LLONG(TimeInMillisecond());
  return 0;
}
