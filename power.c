#include <stdio.h>

int power2(int n) {
  printf(" n=%d\n", n);
  int r;
  if (n==0) {
    r=1;
  } else {
    r = power2(n-1)*2;
  }
  printf(" r=%d\n", r);
  return r;
}

int main() {
  printf("power2(10)=%d\n", power2(10));
  printf("power2(30)=%d\n", power2(30));
}