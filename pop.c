#include <math.h>
#include <stdio.h>

/*
This program calculate the population growth
*/
int main()
{
	int start;
	int end;
	int years = 0;
	
	do{
		printf("Enter start population : ");
		scanf("%i", &start);
		
	}
	while (start < 9);


	do {
		printf("Enter end population : ");
		scanf("%i", &end);
	}
	while (end < start);

	

	while (start < end)
	{
		start = start + (start / 3) - (start /4);
		years++;
	};
	printf("Years : %i\n", years);


	return 0;
}
	
