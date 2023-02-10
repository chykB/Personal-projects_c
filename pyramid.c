#include <stdio.h>

int main()
{
	int x, i, j, y;
	
	do{
		printf("Enter height : ");
		scanf("%d", &x);
	}
	while (x <= 0 ||  x > 12);
	
	/*for (i = 0; i < x; i++)
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
	}*/

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

	
