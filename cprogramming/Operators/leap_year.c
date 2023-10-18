#include<stdio.h>

int main()
{

	int year;

	printf("enter year:\n");

	scanf("%d", &year);

	printf("leap year: %d\n", (year % 4)==0);

	return 0;

}
