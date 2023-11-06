
#include <stdio.h>

int main()
{ 
     int arr[] = {10,25,3,4,5,15,2,18,5,3};
     
     int *p;
     
     p= arr;
     
     int max=*p;
     
     
     for(int i = 0; i <10;i++,p++)
     {
         
               if(*p > max )
                {
                     max = *p;
                }
         
     } 
     
     printf(" max number is %d",max);
   

    return 0;
}




