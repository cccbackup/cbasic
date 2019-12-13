#include <stdio.h>

int square(int x) {
  return x*x;
}

int main() {
  int s2 = square(2);
  printf("square(2)=%d\n", s2);
  int s4 = square(4);
  printf("square(4)=%d\n", s4);
}