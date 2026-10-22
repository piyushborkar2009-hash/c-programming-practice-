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
	scanf(" %c",&op);
	float addition = a+b ;
	float subtraction = a-b;
	float multiplication = a*b;
	if(op == '+')
	{
		printf("%.3f",addition);
	}
	else if(op == '-')
	{
		printf("%.3f",subtraction);
	}
	else if(op == '*')
	{
		printf("%.3f",multiplication);
	}
	else if(op == '/')
	{
		if(b == 0)
	{
		printf("Division by zero is not allowed");
	}
	else
	{
		printf("%.3f",a/b);
	}
	}
	else
	{
		printf("Invalid Operator");
	}
	return 0;
}