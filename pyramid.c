#include <stdio.h>
/**
This program prints right aligned pyramid and adjacent pyramids
*/

int main()
{
	int x, i, j, y;
	
	// ask users input a height between 1 and 12
	do{
		printf("Enter height : ");
		scanf("%d", &x);
	}
	while (x <= 0 ||  x > 12);
	
	//this this code will print a single right aligned pyramid
	for (i = 0; i < x; i++)
	{
		for (y = x; y > i; y--)
		{
			printf(" ");
		}
		for (j = 0; j <= i - 1; j++)
		{
			printf("#");
		}
		printf("\n");
	}
//this code wiill print an adjacent pyramid
for (i = 0; i < x; i++)
	{
		for (y = x; y > i; y--)
		{
			printf(" ");
		}
		for (j = 0; j <= i - 1; j++)
		{
			printf("#");
		}
		printf("  ");
		
		for (j = 0; j <= i - 1; j++)
		{
			printf("#");
		}

		for (y = x; y > i; y--)
		{
			printf(" ");
		}


		printf("\n");
	}


    return 0;



	
	
		

}

	
