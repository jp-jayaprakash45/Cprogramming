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
    
         a++;
         
        if(a<=100) {
         
        if(a%2 == 0)
        {
            printf("%d  ",a);
            fun(a);
        }
        else{
             fun(a);
        }}
 return;
 
 }
