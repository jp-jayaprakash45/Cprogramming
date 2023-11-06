
#include <stdio.h>

int main()
{
    int i,j, arr[]={10,25,381,400,45,545};
    
    int *p,*q;
    
    p = arr;
    
    q = p+5;
    
    for(i=0,j=5; i<j;i++,j--)
    {
       int temp;
       
       temp=*p;
       *p=*q;
       *q=temp;
       
       p++;
       
       q--;
    }
    
    for(int i=0; i<6;i++)
    {
    printf("%d ",arr[i]);
    }

    return 0;
}





