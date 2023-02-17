#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	int num_of_times = 0;
	char password[10]; 
	char saved_password[10] = {"mehnuel"};
	do{
		//prompt users to input passwor
		printf("Please enter your password : ");
		scanf("%s", password);
		
		//incremnent the number of times they input their password
		num_of_times++;

		//compare the password the input with the one they signed up with whic is already stored in the system
		if (strcmp(password, saved_password) == 0)
		{
			printf("Login successful\n");
			break;
		}

		else
		{
			printf("Incorrect password\n");
		}
	}
	while (num_of_times < 2);

	//limit the number of times they input the wrong password and making them wait for some time before they try again
	if (num_of_times == 2)
	{
	printf("You have exceeded the limit, try again\n");
	}
	return 0;
}

