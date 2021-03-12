#include <stdio.h>

int pascal(int i, int j)
{
  if (i == j)
  {
    return 1;
  }
  if (j == 0)
  {
    return 1;
  }
  return pascal(i - 1, j) + pascal(i - 1, j - 1);
}

void printPascal(int n)
{
  int row;
  int column;
  for (row = 0; row < n; row++)
  {
    printf("Row %d: ", row);
    for (column = 0; column <= row; column++)
    {
      printf("%d ", pascal(row, column));
    }
    printf("\n");
  }
}

int recursive_find_indent(int current_row, int total_rows)
{
  if (current_row == total_rows)
  {
    return 0;
  }
  return 2 + recursive_find_indent(current_row + 1, total_rows);
}

void format_print_pascal(int n)
{
  int row;
  int column;
  for (row = 0; row < n; row++)
  {
    printf("%*c", recursive_find_indent(row, n), ' ');
    for (column = 0; column <= row; column++)
    {
      printf("%d   ", pascal(row, column));
    }
    printf("\n");
  }
}

int main()
{
  int rows;

  printf("Please enter the number of rows: ");
  scanf("%d", &rows);
  format_print_pascal(rows);

  return 0;
}
// Linux, Mac: gcc task4.c -o task4; ./task4