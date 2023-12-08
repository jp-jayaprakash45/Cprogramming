#include <stdio.h>
int largest(int,int);
int main()
{
    int a =10,b=20 ,max;
    max =largest(a,b);
    
    printf("%d\n",max);
    
    return 0;
}

int largest(int a,int b){
    int max = 0;
   if(a > b){
       max = a;
   }
   else{
       max = b;
   }
    
    return max;
}
