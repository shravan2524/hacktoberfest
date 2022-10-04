#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  while (a) {
    printf("%d", a % 10);
    a /= 10;
  }
  printf("\n");
}
