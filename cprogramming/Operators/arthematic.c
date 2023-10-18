#include <stdio.h>

int main()
{
   	int var1, var2, result;

	printf("Enter values of var1 and var2\n");

	scanf("%d %d",&var1,&var2);
	
	result = var1 + var2;

	printf("result of adding %d + %d = %d\n", var1, var2, result);

	return 0;



}
