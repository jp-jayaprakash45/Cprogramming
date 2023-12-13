#include <stdio.h>
void add(int * ,int *); // function declaration
int main()
{
    int a=10,b=20;
    
    int sum;
    
    add(&a,&b); // function call
    printf("a = %d b= %d\n",a,b);
    
    return 0;
}

void add(int *p , int *q) // function definition
{
   int temp;
   temp = *p;
   *p = *q;
   *q = temp;
 
}


