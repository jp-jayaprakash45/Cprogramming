
#include <stdio.h>

int main()
{
    int space ,star,rows,i;
    printf("Enter how many rows u want : ");
    
    scanf("%d",&rows);
    
    printf("\n");
    
    for(i = 1; i <=rows ; i++ ){
        for(space=1;space <= rows - i ; space++){
            printf("  ");
        }
        for(star=1 ; star <=2*i-1 ; star++){
              printf("* ");
        }
        printf("\n");
    }
    
      for(i = 1 ; i <= rows ; i++ ){
        for(space=1;space <= (2*rows-i-1) ; space++){
            if(space<=i){
            printf("  ");
            }
            else
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


