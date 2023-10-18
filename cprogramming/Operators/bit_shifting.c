#include<stdio.h>

int main()

{
	int a;
	int n;

	printf("enter value of a:\n");

	scanf("%d", &a);

	printf("enter bit position n\n");

	scanf("%d", &n);

	printf("right side: %d\n", a >> n);

	printf("left side: %d\n", a << n);

	return 0;
}
