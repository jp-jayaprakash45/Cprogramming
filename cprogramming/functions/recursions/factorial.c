#include <stdio.h>

int factorial(int a);

int main()
{
    int a;
    
    printf("Enter a number - ");
    
    scanf("%d",&a);
    
    int fact = factorial(a);
    
    printf("factorial of %d is %d\n",a,fact);

    return 0;
}

int factorial(int a){ // 5 = 5*4*3*2*1 =120
    
    if(a <=1){
        return 1;
    }
    
    return (a*(factorial(a-1)));
}
