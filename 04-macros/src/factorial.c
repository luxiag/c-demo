//
// Created by mac on 2023/7/4.
//
#include "../include/factorial.h"

unsigned int Factorial(unsigned int n) {
  if (n == 0) {
    return 1;//f(0) =1
  } else {
    // f(n) = nf(n-1)
    return n * Factorial(n - 1);
  }
}

unsigned int FactorialByIteration(unsigned int n) {
  unsigned int result = 1;
  for (unsigned int i = n; i > 0; --i) {
    result *= i;
  }
  return result;
}

unsigned int Fibonacci(unsigned int n) {
  if (n == 1 || n == 0) {
    return n;
  } else {
    return Fibonacci(n - 1) + Fibonacci(n - 2);
  }
}

unsigned int FibonacciByIteration(unsigned int n) {
  if (n == 1 || n == 0) {
    return n;
  }
  unsigned int last = 0;
  unsigned int current = 1;

  for (int i = 0; i <= n - 2; ++i) {
    unsigned int temp = current;
    current += last;
    last = temp;
  }
  return current;
}
