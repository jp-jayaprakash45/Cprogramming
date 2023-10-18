#include <stdio.h>

int main()
{
    int  radius,area;
    float  pi = 3.14;
    
    printf("enter radius\n");
    
    scanf("%d",&radius);
    area = pi*radius*radius;
    
    printf("area of circle is %d\n",area);

    return 0;
}
