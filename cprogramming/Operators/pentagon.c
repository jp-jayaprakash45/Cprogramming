 #include <stdio.h>
  
   int main()
   {
       int side,apothem,area;
       
       printf("Enter side & apothem\n");
  
       scanf("%d%d",&side,&apothem);
       
       area = 0.5*0.5*side*apothem;
 
       printf("area of pentagon is %d\n",area);
 
      return 0;
  }


