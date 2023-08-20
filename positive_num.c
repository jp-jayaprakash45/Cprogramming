
#include <stdio.h>

int main()
{
    int number;
    
    printf("enter number\n");
    
    
    scanf("%d",&number);
    
    if (number >0){
       printf("its a positive num\n");
       
    }
    else if (number <0) {
    printf("its a negative number\n");
    }
    
     else {
    printf("its a zero\n");}

    return 0;
}
