#include<stdio.h>

int main()
{
	int a , b;

	printf("before swap a and b:\n");

	scanf("%d %d", &a , &b);

	a = a^b;

	b = b^a;

	a = a^b;

        printf("after swap a and b: %d %d\n", a , b);

	return 0;

}
