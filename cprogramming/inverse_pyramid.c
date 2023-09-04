#include <stdio.h>

int main()
{
    int space ,rows,j,k,i;
    printf("Enter how many rows u want : ");
    
    scanf("%d",&rows);
    
    printf("\n");
    
    for(i = 0 ; i < rows-1 ; i++ ){
        for(space=1;space <= (2*rows-i-1) ; space++){
            if(space<=i){
            printf("  ");
            }
            else
            printf("* ");
        }
        printf("\n");
    }
     for ( i =1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* ");  
        }  
        printf ("\n");  
    } 

    return 0;
}
