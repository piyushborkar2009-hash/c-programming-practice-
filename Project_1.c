#include <stdio.h>
int main()
{
	float a , b;
	char op;
	printf("Enter the value of a : ");
	scanf("%f",&a);
	printf("Enter the value of b : ");
	scanf("%f",&b);
	printf("Enter the operator : ");
	scanf("\n%c",&op);
	switch(op)
	{
		case '+':
		printf("%.3f",a+b);
		break;
		case '-':
		printf("%.3f",a-b);
		break;
		case '*':
		printf("%.3f",a*b);
		break;
		case '/':
		if(b==0)
		{
			printf("Cannot divide by zero");
		}
		else
		{
			printf("%.3f",a/b);
		}
		break;
		default:
		printf("Invalid Operator");
		break;
	}
	return 0;
}