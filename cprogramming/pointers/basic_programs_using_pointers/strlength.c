#include <stdio.h>

int main()
{
    char a[] = "Hello World";
    
    char *p = a;
    
    int count =0;
    
    printf("%c\n\n",*p);
    
    for (; *p != '\0'; p++){
        count++;
    }
    printf("string length :%d ",count);

    return 0;
}
