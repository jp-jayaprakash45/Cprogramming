#include <stdio.h>

int main()
{
    int arr[2][2][3]= {
                        {{1,25,3},{4,5,6}},
                        {{7,8,9},{10,11,12}}
                       };
                       
    int max = arr[0][0][0];                    
    for(int i=0;i<2;i++)
    {
       for(int j=0;j<2;j++)
       {
            for(int k=0;k<3;k++)
            {
               if(arr[i][j][k] > max)
               {
                   max = arr[i][j][k];
               }
            }
       }
    }
    
    printf("%d", max);

    return 0;
}



