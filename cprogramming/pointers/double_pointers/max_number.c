#include <stdio.h>

int main()
{
    int a[2][3]={{1,2,10},{6,25,264}};
    
    int (*p)[3] = a;
    
    int max = **p;
    
    for(int i =0;i< 2;i++)
    {
        
        
        for(int j =0;j<3 ;j++)
        {
            
            **p= *(*(p+i)+j);
            
            if(**p > max)
            {
                max = **p;
                
            }
            
        }
    
    }
    
    printf("%d ",max);
    return 0;
}



