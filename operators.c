#include<stdio.h>

int main()
{
	int var1,var2;
	char operator,ch;

	do
	{

	printf("enter operator(+,-,*,%,/)\n");

	scanf(" %c",&operator);

	printf("enter your value var1 and var2\n");

	scanf("%d %d",&var1,&var2);

	switch(operator){
	case '+':
		printf("your answer is %d\n",var1+var2);
		break;
	
	case '-':
	        printf("your answer is %d\n",var1-var2);
		break;

	case '*':
		printf("your answer is %d\n",var1*var2);
		break;

	case '/':
	        printf("your answer is %d\n",var1/var2);
		break;

	case '%':
	     printf("your answer is %d\n",var1%var2);
		break;
	

	default:
	     printf("invalid operator\n");
		break;
	
	
	}
	printf("Do u want to continue (y/n)\n");
	scanf(" %c",&ch);

	}while(ch == 'y');

   return 0;
}
	       	
	


