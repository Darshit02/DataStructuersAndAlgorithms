#include <stdio.h>

// int linerSearch(int arr[] ,int size, int element){
//   for(int i = 0 ; i <size ; i++){
//     if(arr[i] == element){
//       return i;
//     }
//   }
//     return -1;
//   }
int binarySearch(int arr[], int size, int element) {
  int mid, low, high;
  low = 0;
  high = size-1 ;
  while (low <= high) {

    mid = (low + high) / 2;
    if (arr[mid] == element) {
      return mid;
    }
    if (arr[mid] < element) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  // Unsorted Array for liner search
  // int arr[] ={1,3,5,56,4,3,33,35,64,22};
  // int size = sizeof(arr)/sizeof(int);

  // sorted Array for Binary search
  int arr[] = {1, 3, 33, 35, 64};
  int size = sizeof(arr) / sizeof(int);
  int element = 33;
  int searchIndex = binarySearch(arr, size, element);
  printf("The element %d was found at index %d \n", element, searchIndex);
  return 0;
}