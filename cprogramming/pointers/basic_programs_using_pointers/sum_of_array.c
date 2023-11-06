#include <stdio.h>

int main()
{
    int result = 0, arr[] = {1,2,3}; // 6
    
    int *p = arr;
    
    for(int i=0;i<3;i++,p++)
    {
      result = result + *p;
    }
    
    printf("%d ",result);

    return 0;
}


