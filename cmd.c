#include <stdio.h>
#include <math.h>
/**
 * main - A simple command line calculator 
 * Return: 0
 */
int main()
{
	float x, z;
	char op;

	printf("Enter a number : ");
	scanf("%f", &x);

	printf("Selecet operator : ");
	scanf(" %c", &op);

	printf("Enter a second number : ");
	scanf("%f", &z);

	if ( op == '*')
	{
		printf("Result : %.1f\n", x * z);
	}
	else if (op == '+')
	{
		printf("Result: %.1f\n", x + z);
	}
	else if (op == '-')
	{
		printf("Result: %.1f\n", x - z);
	}
	else if (op == '/')
	{
		printf("Result: %.1f\n", x / z);
	}
	else
	{
		printf("Invalid operator\n");
	}
	return 0;
}
