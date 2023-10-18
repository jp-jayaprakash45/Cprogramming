#include<stdio.h>

int main()

{
	char password[32];
	int length;

	printf("enter password:\n");

	scanf("%s", password);

	printf("password length: %d\n",(password >= 8) && (length <= 16));

	return 0;

}
