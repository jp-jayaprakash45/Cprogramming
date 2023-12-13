#include <stdio.h>
void fun(int a);
int main()
{
    int a =10;
    fun(a);
    
    printf("\n");

    return 0;
}
void fun(int a){
    
        printf("%d  ",a);
         a++;
         
        if(a<=100)
        {
            fun(a);
        }
 return;
 
 }
