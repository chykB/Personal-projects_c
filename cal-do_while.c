#include <stdio.h>
#include <stdlib.h>

/** 
 * Arithmatic operation using do-while loop
 * Return 0;
*/
int main()
{
	int i, j;
	int x;

	printf("Enter number : ");
	scanf("%d", &i);

	printf("Enter second number : ");
	scanf("%d", &j);
	

	do {
		printf("Select operator : 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division : ");
		scanf("%d", &x);


		switch (x)
		{
			case 1:
				printf("Result of %d multiply by %d is : %d\n", i, j,  i * j);
				break;
			case 2:
				printf("Result of %d minus %d is : %d\n", i, j,  i - j);
				break;
			case 3:
				printf("Result of %d plus %d is : %d\n", i, j, i + j);
				break;
			case 4:
				printf("Result of %d divide by %d is: %.1f\n", i, j, (float) i / (float) j);
				break;
			default:
				printf("Invalid operatior");
				break;
		}
	
	}	
	while (x == '*' || x == '-' || x == '+' || x == '/');
	//return 0;
}

