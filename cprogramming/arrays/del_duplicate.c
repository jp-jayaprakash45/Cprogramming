#include <stdio.h>

int main()
{
    int a[]={2,2,2,3,4,5,5,6,7,7};
    
    int size,i,j,k;
    
    size = sizeof (a)/sizeof(a[0]);
    
    printf("%d\n",size);
    
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<size-1;k++)
                {
                    a[k]=a[k+1];
                    
                    
                }
                 size--;
                    
                 j--;
               
            }
        }
        
    }
        for(i=0;i<size;i++)
        {
          printf("%d,",a[i]);
        }
    
    return 0;
}
