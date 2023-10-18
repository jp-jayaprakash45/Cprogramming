#include <stdio.h>

int main()
{
    int length,width, area;
    
    printf("enter length and width\n");
    
    scanf("%d%d",&length,&width);
    area = length * width;
    
    printf("area of rectangle is %d\n",area);

    return 0;
}
