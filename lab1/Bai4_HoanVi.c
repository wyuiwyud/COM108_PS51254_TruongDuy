#include <stdio.h>
int main() {
  int a = 5;
  int b = 10;

  printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);
  return 0;
}
