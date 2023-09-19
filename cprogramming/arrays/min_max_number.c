#include <stdio.h>

int main()
{
   
    int n;
    printf("Enter array size : ");
    
    scanf("%d",&n);
    int a[n];
    
    for(int k =0; k < n; k++){
        scanf("%d",&a[k]);
   }
   
    int min=a[0],max=a[0];
    
    int len = sizeof(a)/sizeof(a[0]);
    
    for (int i=1; i< len;i++ ){

           if(min > a[i])
               min=a[i];

           if(max < a[i])
              max = a[i];
       }
    
 printf("min %d max %d \n",min,max);
    return 0;
}
