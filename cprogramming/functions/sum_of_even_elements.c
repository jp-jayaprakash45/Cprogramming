#include <stdio.h>
int add( int arr[]);
int main()
{
    int arr[] = {1,2,3,4,5,6},sum =0;
    
    sum = add(arr);
    printf("%d\n",sum);
    
    return 0;
}

int add(int arr[]){
    int num =0;
 for(int i =0;i<6;i++,i++) // for printing even elements in an array 
 {                         //  if we want to print odd elements then simply change i = 1;
         num = num + arr[i];
 }
   return num;
}
