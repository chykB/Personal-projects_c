#include <stdio.h>
#define operator 4
/**
 * Arithmatic operation using functions
*/
float add(float num1, float num2)
{
	return (num1 * num2);
}
float divide(float num1, float num2)
{
	return (num1 / num2);
}
float subtract(float num1, float num2)
{
	return (num1 - num2);
}
float multi(float num1, float num2)
{
	return (num1 * num2);
}

int main()
{
	float (*funct_ptr[operator]) (float, float) = {add, divide, subtract, multi};
	int select;
	float num1, num2;

	printf("Select operator: 1 for add, 2 for divide, 3 for subtract, 4 for multiplication\n");
	scanf("%d", &select);

	printf("Enter num1 and num2 : \n");
	scanf("%f %f", &num1, &num2);
	printf("Result %f", funct_ptr[select], (num1, num2));
	
	return 0;
}
