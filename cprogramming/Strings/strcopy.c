#include <stdio.h>

int main()
{
    int i;
    
    char str[]="hello world";
    
    char copy[30];
    
    for (i = 0 ; str[i] != '\0';i++)
    {
        copy[i] = str[i];
    }
    printf("%s",copy);

    return 0;
}


