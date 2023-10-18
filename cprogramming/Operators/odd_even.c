#include<stdio.h>

int main()

{
        int number;

        printf("enter number\n"); // output - 0 is even and 1 is odd.

        scanf("%d", &number);

        printf("your number is %d\n", number & 1);

        return 0;

}
