#include <stdio.h>


int main() {

  int arr1[] ={1,3,5,7,9};
  int arr2[]=  {2,4,6,8,10}; 
  int arr3[10];

  for (int i = 0; i < 5; i++) {
    arr3[i] = arr1[i];
  }
  int k = 5;
 
  for (int i = 0; i < 5; i++,k++) 
  {
    arr3[k] = arr2[i];
  }
  printf("\nThe merged array before sorting : \n");
  for (int i = 0; i < 10; i++)
    printf("%d ", arr3[i]); //Printing the merged array before sorting


  printf("\n The merged array after sorting\n");
  for (int i = 0; i < 10; i++) //Sorting the array
  {
    int tem;
    for (int j = i + 1; j < 10; j++) {
      if (arr3[i] > arr3[j]) {
        tem = arr3[i];
        arr3[i] = arr3[j];
        arr3[j] = tem;
      }
    }
  }

  for (int i = 0; i < 10; i++) //Printing the sorted Array 
  {
    printf(" %d ", arr3[i]);
  }
}
