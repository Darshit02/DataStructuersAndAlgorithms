#include <stdio.h>

void printArr(int *A ,int n){
  for (int i = 0 ; i<n ; i++){
    printf("Array Element is : %d\n", A[i]);
  }
}
void selectionSort(int *A,int n){
  int indexOfMin , temp;
  printf("Running SelectionSort...\n");
  // For loop for indexes
  for (int i = 0 ; i<n-1 ; i++){
    indexOfMin = i;
    for (int j = i+1 ; j < n ; j++)
      {
        if(A[j] < A[indexOfMin]){
          indexOfMin = j ;
        }
      }
    //swap A[i] and A[indexOfMin]
    temp = A[i];
    A[i] = A[indexOfMin];
    A[indexOfMin]=temp;
    
  }
}
int main() {
  int A[] = {5,22,1,56,8,50};
  int n = 6;
  printArr(A, n);
  selectionSort(A,n);
  printArr(A, n);
  return 0;
}