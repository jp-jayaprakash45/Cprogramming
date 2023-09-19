#include <stdio.h>

int main()
{
    int a = 127;
    char *p;
    p = (char*)&a;
    
    for(int i =7; i>=0;i--){
        if(*p & (1<<i)){
            printf("1");
        }
        else{
            printf("0");
        }
    }

    return 0;
}
