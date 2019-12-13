#include <stdio.h>

int sum(int* array, int len) {
  int s = 0;
  for (int i=0; i<len; i++) {
    s += array[i];
  }
  return s;
}

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int b[7] = {9, 3, 2, 8, 7, 1, 6};
  printf("sum(a)=%d\n", sum(a, 5));
  printf("sum(b)=%d\n", sum(b, 7));
}