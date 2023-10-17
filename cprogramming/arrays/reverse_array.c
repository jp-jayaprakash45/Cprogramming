#include <stdio.h>

int main()
{
    int i,j, arr[]={1,2,3,4,5};

    
    for(i=0,j=4; i<j;i++,j--)
    {
       int temp;
       
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
    
    for(int i=0; i<5;i++){
    printf("%d,", arr[i]);
    
    }

    return 0;
}
