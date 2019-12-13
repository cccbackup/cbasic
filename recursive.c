#include <stdio.h>

int sum(int n) {
  if (n==1) return 1;
  return sum(n-1)+n;
}

int main() {
  printf("sum(10)=%d\n", sum(10));
  printf("sum(100)=%d\n", sum(100));
}