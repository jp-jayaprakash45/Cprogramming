#include <stdio.h>

int main()
{
    char a[] = "Hello World";
    int count;
    
    for (int i=0; a[i] != '\0';i++ ){
        count++;
    }
    printf("string length :%d ",count);

    return 0;
}
