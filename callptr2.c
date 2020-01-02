#include <stdio.h>

int f1(int *p) {
  *p=3;
  printf("*p=%d\n", *p);
  return *p;
}

int main() {
  int a = 5;
  printf("a=%d\n", a);
  int r = f1(&a);
  printf("r=%d\n", r);
  printf("a=%d\n", a);
}

