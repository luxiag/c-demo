

#include "io_utils.h"
#include "tinycthread.h"
#if defined(_WIN32)
#include <sys/timeb.h>
#endif

#if defined(__UNIX__) || defined(__APPLE__)
//#include <sys/resource.h>
#include <sys/time.h>
#include <sys/timeb.h>
#endif

typedef long long long_time_t;

long_time_t TimeInMillisecond(void) {
  struct timeb time_buffer;

#if defined(_WIN32)
  ftime(&time_buffer);
  return time_buffer.time * 1000LL + time_buffer.millitm;
#elif defined(__UNIX__) || defined(__APPLE__)
  struct timeval time_value;
  gettimeofday(&time_buffer, NULL);
  return time_buffer.tv_sec * 1000LL + time_buffer.tv_usec / 1000;
#elif defined(__STDC__) && __STDC__VERSION__ == 201112L
  struct timespec timespec_value;
  timespec_get(&timespec_value, TIME_UTC);
  return timespec_value.tv_sec * 1000LL + timespec_value.tv_nsec / 1000;
#else
  time_t current_time = time(NULL);
  return current_time * 1000LL;
#endif
}

void TimeCost(char const *msg) {
  static time_t start_time = 0;
  if (msg && start_time != 0) {
    time_t current_time = TimeInMillisecond();
    PRINTLNF("%s consts: %lld", msg, current_time - start_time);
  }
  start_time = TimeInMillisecond();
}




void SleepMs(long milliseconds) {
  long seconds = milliseconds / 1000;
  long nanoseconds = (milliseconds % 1000) * 1000000L;
  thrd_sleep(&(struct timespec){.tv_sec = seconds, .tv_nsec = nanoseconds}, NULL);
}