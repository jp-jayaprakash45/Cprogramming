#include <stdio.h>

int main()
{
   int n,p;
   
   printf("enter number of elements :");
   
   scanf("%d",&n);
   
   int arr[n];
   
   printf("enter the elements :");
   
   for(int i =0;i< n ; i++)
   {
       scanf("%d",&arr[i]);
   }
   
   printf("Enter number of positions to rotate :");
   
   scanf("%d",&p);
   
   for (int i = 0; i<p ; i++)
   {
       int temp = arr[0];
       
       for(int j=0 ; j<n-1 ;j++){
           
           arr[j] = arr[j+1];
       }
       
       arr[n-1] = temp;
   }
   
   printf("after rotating elements :");
   
   for(int i =0 ; i<n; i++)
   {
       printf("%d,",arr[i]);
   }
   
    
   
    return 0;
}
