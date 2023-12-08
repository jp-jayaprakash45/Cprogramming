#include <stdio.h>
void findMinMax(int *a, int *b,int *min, int *max);

int main()
{
    int a=40,b=20,max ,min;
    
     printf("a = %d b = %d \n\n",a,b);
    
    findMinMax(&a,&b,&max,&min);
    
    printf("min = %d max = %d\n",min,max);

    return 0;
}void findMinMax(int *x, int *y, int *max , int *min){
    if(*x > *y){
        printf("max value is 'a' and minimum value is 'b'\n\n");
         *max = *x;
         *min = *y;
     }
     else{
         printf("max value is 'b' and minimum value is 'a'\n\n");
          *max = *y;
         *min = *x;
     }
     
    return ;
    
}


