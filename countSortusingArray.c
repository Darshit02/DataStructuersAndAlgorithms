#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void printArr(int *A, int n) {
  for (int i = 0; i < n; i++) {
    printf("The Element of an Array is : %d\n", A[i]);
  }
}
int maximum(int A[], int n) {
  int max = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (max < A[i]) {
      max = A[i];
    }
  }
  return max;
}
void countSort(int *A, int n) {
  int i, j;
  // Find the maximum element in A
  int max = maximum(A, n);
  // Create The Count Array
  int *count = (int *)malloc((max + 1) * sizeof(int));
  // Initialize the array element to  0
  for (i = 0; i < max + 1; i++) {
    count[i] = 0;
  }
  for (i = 0; i < n; i++) {
    count[A[i]] = count[A[i]] + 1;
  }
  i = 0; // counter for count Array
  j = 0; // counter for main Array

  while (i <= max) {
    if (count[i] > 0) {
      A[j] = i;
      count[i] = count[i] - 1;
      j++;
    } else {
      i++;
    }
  }
}
int main() {
  int A[] = {9, 1, 4, 14, 4, 15, 6};
  int n = 7;
  printArr(A, n);
  countSort(A, n);
  printf("After Running A Count Sort\n");
  printArr(A, n);
  return 0;
}