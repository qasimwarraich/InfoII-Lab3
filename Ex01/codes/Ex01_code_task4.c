#include <stdio.h>
const int MAX_LENGTH = 1000;

void ascSelectionSort(int arr[], int n) {
  int i, j, min_idx;
  for (i = 0; i < n - 1; i++) {
    // Find the minimum element in unsorted array
    min_idx = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }
    // Swap arr[min_idx] and arr[i]
    int temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
  }
  // Prints the sorted array
  printf("\nAscending Order: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

void descSelectionSort(int arr[], int n) {
  int i, j, max_idx;
  for (i = 0; i < n - 1; i++) {
    // Find the maximum element in unsorted array
    max_idx = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] > arr[max_idx]) {
        max_idx = j;
      }
    }
    // Swap the found minimum element with the first element
    int temp = arr[max_idx];
    arr[max_idx] = arr[i];
    arr[i] = temp;
  }
  // Prints the sorted array
  printf("\nDescending Order: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int A[MAX_LENGTH];
  int n, i;

  printf("Values of A separated by spaces (non-number to stop):");
  i = 0;
  while (scanf("%d", &A[i]) == 1) {
    i++;
  }
  n = i;
  scanf("%*s");

  printf("Result: ");
  ascSelectionSort(A, n);
  descSelectionSort(A, n);
  printf("\n");
  return 0;
}
// Linux, Mac: gcc task4.c -o task4; ./task4
