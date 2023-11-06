#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5};
    int b[5];
    
    int *p;
    
    int *q;
    
    p = a;
    
    q = b;
    
    for(int i =0; i<5;i++,p++,q++)
    {
        *q = *p;
    }
    
    for(int i =0; i<5;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}


