#include <stdio.h>
#include <stdlib.h>

int sequence(int n) {
  if (n == 1) {
    return 1;
  }
  if (n == 2) {
    return 2;
  }
  int a_n_minus_1 = sequence(n - 1);
  int a_n_minus_2 = sequence(n - 2);
  if (a_n_minus_1 % 3 == 0) {
    a_n_minus_1 = a_n_minus_1 / 3;
  }
  return a_n_minus_1 + a_n_minus_2;
}

int main() {
  int n;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Sequence: ");
  int i;
  for (i = 1; i <= n; i++) {
    printf("%d ", sequence(i));
    fflush(stdout);
  }
  printf("\n");
  return 0;
}
// Linux, Mac: gcc task2.c -o task2; ./task2
