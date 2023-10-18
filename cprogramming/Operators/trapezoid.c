#include <stdio.h>
  
   int main()
   {
       int base1,base2,base3,height,area;
       
       printf("Enter base1 & base2 & height \n");
  
       scanf("%d%d%d",&base1,&base2,&height);
       
       area = 0.5*(base1+base2)*height;
 
       printf("area of trapezoid is %d\n",area);
 
      return 0;
  }
