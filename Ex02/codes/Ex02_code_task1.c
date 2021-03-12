#include <stdio.h>

int exponent(int x, int pow) {
  if (pow == 0) {
    return 1;
  } else {
    return x * exponent(x, pow - 1);
  }
}

int main() {
  int x;
  int pow;

  printf("Please enter the base: ");
  scanf("%d", &x);
  printf("Please enter the power: ");
  scanf("%d", &pow);
  printf("The result is: %d\n", exponent(x, pow));
  return 0;
}
// Linux, Mac: gcc task1.c -o task1; ./task1