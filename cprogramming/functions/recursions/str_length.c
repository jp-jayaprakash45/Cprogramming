#include <stdio.h>

int str_length(char *str,int i);

int main()
{
    char str[] = "Hello World";
    
    int total_characters = str_length(&str,0);
    
    printf("%d\n",total_characters);

    return 0;
}
int str_length(char *str,int i){
    
    if(str[i] == '\0'){
        return i;
        
    }
    str_length(str,++i);
}
