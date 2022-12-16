#include <stdio.h>
#include <stdlib.h>

void printArr(int *A, int n) {
  for (int i = 0; i < n; i++) {
    printf("The Element of an Array is : %d\n", A[i]);
  }
}
void merge(int A[], int mid, int low, int high) {
  int i, j, k, B[100];
  i = low;
  j = mid + 1;
  k = low;

  while (i <= mid && j <= high) {
    if (A[i] < A[j]) {
      B[k] = A[i];
      i++;
      k++;
    } else {
      B[k] = A[j];
      j++;
      k++;
    }
  }
  while (i <= mid) {
    B[k] = A[i];
    k++;
    i++;
  }
  while (j <= high) {
    B[k] = A[j];
    k++;
    j++;
  }
  for (int i = low; i <= high; i++) {
    A[i] = B[i];
  }
}

void mergeSort(int A[], int low, int high) {
  int mid;
  if (low < high) {
    mid = (low + high) / 2;
    mergeSort(A, low, mid);
    mergeSort(A, mid + 1, high);
    merge(A, mid, low, high);
  }
}
int main() {
  int A[] = {9, 1, 4, 14, 4, 15, 6};
  int n = 7;
  printArr(A, n);
  mergeSort(A, n * 0, n - 1);
  printf("After Running A Merge Sort\n");
  printArr(A, n);
  return 0;
}