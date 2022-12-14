#include <stdio.h>

void printArr(int *A, int n) {
  for (int i = 0; i < n; i++) {
    printf("Array Eelement is :%d\n", A[i]);
  }
}
void insertionSort(int *A, int n) {
  int key, j;
  // loop for passes
  for (int i = 1; i <= n - 1; i++) {
    key = A[i];
    j = i - 1;
    // loop for each passes
    while (j >= 0 && A[j] > key) {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = key;
  }
}
int main() {
  int A[] = {3, 44, 5, 77, 23, 4};
  int n = 6;
  printf("The Array Is Below\n");
  printArr(A, n);
  insertionSort(A, n);
  printf("Array after sorting\n");
  printArr(A, n);
  return 0;
}