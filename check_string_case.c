#include <stdio.h>
#include <string.h>
/*
 * This program check if a string is lowercase it turns the output to uppercase and vice versa*/

int main()
{
	char string[20];
	int i;

	printf("Enter a word : ");
	scanf("%s", string);

	for (i = 0; i < strlen(string); i++)
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			printf("%c", string[i]-32);
		}	
		else if (string[i] >= 'A' && string[i] <= 'Z')
		{
			printf("%c", string[i]+32);
                }
		else
		{
			printf("%s is not an alphabet\n", string);
		}
	printf("\n");

	return 0;
}
