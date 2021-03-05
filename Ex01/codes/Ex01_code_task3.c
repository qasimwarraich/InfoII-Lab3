#include <stdio.h>

const int row = 3;
const int col = 3;

int calculate_row_column(int row, int column, int a[row][col],
                         int b[row][col]) {
  int total = 0;
  int i;
  for (i= 0; i < 3; i++) {
    total = total + a[row][i] * b[i][column];
  }
  return total;
}

void matmul(int a[3][3], int b[3][3]) {
  int result[3][3];
  int row;
  int column;
  for (row = 0; row < 3; row++) {
    for (column = 0; column < 3; column++) {
      result[row][column] = calculate_row_column(row, column, a, b);
    }
  }
  // now prints the result
  for (row = 0; row < 3; row++) {
    printf("Row %d of the result: ", row);
    for (column = 0; column < 3; column++) {
      printf("%d ", result[row][column]);
    }
    printf("\n");
  }
}

int main() {
  int mat_a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int mat_b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  matmul(mat_a, mat_b);
  return 0;
}
// Linux, Mac: gcc task3.c -o task3; ./task3