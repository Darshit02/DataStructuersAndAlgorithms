#include <stdio.h>

void printArray(int *A, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Array Element is : %d\n", A[i]);
  }
}
void bubbleSortAccend(int *A, int n)
{
  int temp;
  for (int i = 0; i < n - 1; i++) // For number of Passes
  {
    for (int j = 0; j < n - 1 - i; j++) // for comparison
    {
      if (A[j] > A[j + 1])
      {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
}

void bubbleSortDecend(int *A, int n)
{
  int temp;
  for (int i = 0; i < n - 1; i++) // For number of Passes
  {
    for (int j = 0; j < n - 1 - i; j++) // for comparison
    {
      if (A[j] < A[j + 1])
      {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
}
// Make this Algorithm Adeptable
void bubbleSortAdeptive(int *A, int n)
{
  int temp;
  int isSorted = 0;
  for (int i = 0; i < n - 1; i++) // For number of Passes
  {
    printf("Working on Pass Number %d\n", i + 1);
    isSorted = 1;
    for (int j = 0; j < n - 1 - i; j++) // for comparison
    {
      if (A[j] > A[j + 1])
      {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
        isSorted = 0;
      }
    }
    if (isSorted)
    {
      return;
    }
  }
}
int main()
{
  int A[] = {12, 54, 65, 7, 23, 9};
  // int A[] = {1,2,3,4,5,6};
  int n = 6;
  printArray(A, n); // Array Before Sorting
  printf("The Sorted Array Is Below\n");
  // printf("Sorted An Array In Accending Order\n");
  //  bubbleSortAccend(A, n); // sort the Array in Accending Order
  // printArray(A, n);// Array after sorting
  // printf("Sorted An Array In Decending Order\n");
  // bubbleSortDecend(A, n); // Sort The Array in Accending Order
  // printArray(A, n);       // Array after sorting
  bubbleSortAdeptive(A, n); // Adaptive Function
  printArray(A, n);

  return 0;
}