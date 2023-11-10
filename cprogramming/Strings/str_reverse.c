#include <stdio.h>
#include <string.h>

int main()
{
    char a1[]="Hello";
    
    int len;
    
    len = strlen(a1);

    printf("string length : %d\n\n",len);
    
    for(int i=0;i<len/2;i++) 
    {
        int temp;
        temp=a1[i];
        a1[i]=a1[len-1-i];
        a1[len-1-i]=temp;
    }
    printf("%s",a1);

    return 0;
}
