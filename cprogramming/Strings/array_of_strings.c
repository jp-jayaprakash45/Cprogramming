#include <stdio.h>

int main()
{
    char str[][50]={"Jp","Anusha","haritha","vara"};
    
    for(int i=0;i<4;i++){
       for(int j=0;j<30;j++){ 
        printf("%c",str[i][j]);
        }
       printf("\n");
    }

    return 0;
}


