#include <stdio.h>

int main()
{
	int i,n,result, a = 0,b = 1;

	printf("enter n value\n");

	scanf("%d",&n);

	for(i=1;i<=n;i++){

		printf("%d  ",a);

		result = a + b;

		a = b;
		b = result;
	}


	return 0;
}
