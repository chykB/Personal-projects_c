#include <stdio.h>
#include <math.h>
/*
 * This program calculate profit and loss
*/
int main()
{
	//declare variables to store users input
	float sp, cp, cal;

	//ask user for the cost price
	printf("Enter the cost price : $");
	scanf("%f", &cp);

	//ask user for the selling price
	printf("Enter the selling price : $");
	scanf("%f", &sp);

	//calculate the profit and loss
	if (sp > cp)
	{
		cal = sp - cp;
		printf("Your profit is : $%.1f\n", cal);
	}
	else if (sp < cp)
	{
		cal = cp - sp;
		printf("Your loss is : $%.1f\n", cal);
	}
	else
	{
		printf("You have no profit and no loss\n");
	}

	return 0;
}
	
