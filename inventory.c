#include <stdio.h>
#include <stdlib.h>

/*
 * Inventory tracking system to add, delete and display inventories
 */
 struct items{
	 char name[20];
	 int code;
	 int quantity;
	 float price;
 };
int main()
{
	int action;

	printf("Select action : 1 to add new items, 2 to add to prvious items, 3 to delete item, 4 to display items\n");
	scanf("%i", &action);

	if (action == 1)
	{
		struct items items;
		FILE *fp;
		fp = fopen("inventory.txt", "w");
		if (fp == NULL)
		{
			printf("error opening file\n");
			exit(1);
		}

		printf("Enter name of item : ");
		scanf("%s", items.name);
		printf("Enter item code : ");
		scanf("%d", &items.code);
		printf("Enter quantity : ");
		scanf("%d", &items.quantity);
		printf("Enter item price : ");
		scanf("%f", &items.price);

		fprintf(fp, "Name of item : %s\nItem code : %d\nQuantity : %d\nPrice : %.2f\n\n", items.name, items.code, items.quantity, items.price);
		
		fclose(fp);
	}
	else if (action == 2)
	{
		struct items items;
		FILE *fp;
		fp = fopen("inventory.txt", "a");
		if (fp == NULL)
			{
				printf("error opening file");
				exit(1);
			}
		
		printf("Enter name of item : ");
		scanf("%s", items.name);
		printf("Enter item code : ");
		scanf("%d", &items.code);
		printf("Enter quantity : ");
		scanf("%d", &items.quantity);
		printf("Enter item price : ");
		scanf("%f", &items.price);

		fprintf(fp, "Name of Item : %s\nItem Code : %d\nItem quantity : %d\nUnit price : %.1f\n\n", items.name, items.code, items. quantity, items.price);

		fclose(fp);
	}
	else if (action == 3)
	{
		struct items items, delete;

		FILE *fp, *temp;
		fp = fopen("inventory.txt", "r");
		if (fp == NULL)
		{
			printf("error opening file");
			exit(1);
		}

		temp = fopen("temp.txt", "w");
		if (temp == NULL)
		{
			printf("error writing to file");
			exit(1);
		}

		printf("Enter item to delete : ");
		scanf("%d", &delete.code);

		while (fscanf(fp, "%s %d %d %f", items.name, &items.code, &items.quantity, &items.price) == 4)
		{
			if (items.code != delete.code)
			{
				fprintf(temp, "%s %d %d %f", items.name, items.code, items.quantity, items.price);
			}

		}
		fclose(fp);
		fclose(temp);

		remove("inventory.txt");
		rename("temp.txt", "inventory.txt");
	}
	else if (action == 4)
	{

	}



	return 0;
}
