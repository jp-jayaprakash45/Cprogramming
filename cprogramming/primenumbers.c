
#include <stdio.h>

int main()
{
   int i ,n, count = 0;
   
   printf("Enter any number :");
   
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
       if(n%i == 0)
         count++;
   }
   if(count == 2)
   {
       printf("it's a prime number\n");
   }
   else{
        printf("it's not a prime number\n");
   }
   

    return 0;
}
