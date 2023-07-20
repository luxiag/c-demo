#include <stdio.h>
#include <pthread.h>

// 线程函数
void* threadFunction(void* arg) {
  int* threadID = (int*)arg;
  printf("线程 %d 正在执行\n", *threadID);
  // 线程的具体操作...

  return NULL;
}

int main() {
  pthread_t thread1, thread2;
  int threadID1 = 1, threadID2 = 2;

  // 创建线程1
  int result1 = pthread_create(&thread1, NULL, threadFunction, &threadID1);
  if (result1 != 0) {
    printf("无法创建线程1\n");
    return 1;
  }

  // 创建线程2
  int result2 = pthread_create(&thread2, NULL, threadFunction, &threadID2);
  if (result2 != 0) {
    printf("无法创建线程2\n");
    return 1;
  }

  // 等待线程1和线程2结束
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);

  printf("主线程结束\n");

  return 0;
}