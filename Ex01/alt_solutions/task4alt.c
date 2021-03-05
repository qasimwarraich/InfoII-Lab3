#include <stdio.h>

/* This implementation of selection sort uses a mode flag to choose between
 * ascending and descending. It works by keeping track of the extreme (min or
 * max) index and linearly searching through the array to ensure that the it is
 * the true extreme. When this is successful through an exhaustive search the
 * extreme element is placed at the position the search began. This is an
 * intuitive sorting algorithm and a strategy one might employ when sorting
 * bank notes for example.
 */

void swap(int arr[], int x, int y);
void printarr(int arr[], int len);


void selection_sort(int arr[], int len, int mode)
{
    for (int i = 0; i < len; ++i) {
    int extreme = i;
        for (int j = i; j < len; ++j) {
            if (mode == -1){
                if (arr[j] > arr[extreme]) 
                    extreme = j;
            }else {
                if (arr[j] < arr[extreme]) 
                    extreme = j;
            }
        }
        swap(arr, i, extreme); 
    }
}

int main(int argc, char *argv[])
{
    int arr[10] = {2, 9, 4, 5, 10, 1, 2, 3, 7, 6};
    int len = 10;
    
    selection_sort(arr, len, -1);
    printarr(arr, len);

    return 0;
}

void swap(int arr[], int x, int y)
{
        int temp = arr[y];
        arr[y] = arr[x];
        arr[x] = temp;
}

void printarr(int arr[], int len)
{
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
        printf("\n");
}

