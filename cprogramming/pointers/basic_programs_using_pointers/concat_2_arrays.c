#include <stdio.h>

int main()
{ 
     int arr1[] = {1,2,3};
     
     int arr2[] = {4,5,6};
     
     int arr3[10];
     
     int *p,*q; 
     
     
     p= arr1;
     
     q = arr2;
     
     for(int i=0;i<3;i++,p++)
     {
         arr3[i] = *p;
     }
     int k =3;
     
     for(int j = 0; j <3;j++,k++,q++)
     {
         arr3[k] = *q;
     }
     
     for(int i =0;i<6;i++)
     {
        printf("%d ",arr3[i]);  
     }
   

    return 0;
}


