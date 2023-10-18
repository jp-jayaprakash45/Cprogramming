#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,2,4,5,3,6,7,8};
    
    int size = sizeof (arr)/sizeof (arr[0]);
    
    for(int i=0; i < size;i++)
    {
        for(int j =i+1; j < size; j++)
        {
          if(arr[i]==arr[j])
          {
            arr[j]=0;  
          }  
        }
        printf("%d",arr[i]);
    }
    

    return 0;
}
