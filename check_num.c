#include <stdio.h>

/** This program check if a number is divisible by 4 and 13
 * Return 0
*/
int main()
{
	int num;

	printf("Enter a number :  ");
	scanf("%d", &num);

	if (num % 4 == 0)
	{
		printf("The number you entered is divisible by 4\n");
	}
	else if (num % 13 == 0)
	{
		printf("The number you entered is divisible by 13\n");
	}
	else
	{
		printf("The number you entered is not divisible by 4 and 13\n");
	}
	return 0;
}	
