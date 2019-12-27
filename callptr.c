#include <stdio.h>

int f1(int n) {
  n=3;
  printf("n=%d\n", n);
  return n;
}

int main() {
  int a = 5;
  int r = f1(a);
  printf("a=%d\n", a);
  printf("r=%d\n", r);
}

