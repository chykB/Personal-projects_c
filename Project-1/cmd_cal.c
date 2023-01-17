#include <stdio.h>
#define cal 4

float sum(float n1, float n2) {return (n1 + n2);}
float multi(float n1, float n2) {return (n1 * n2);}
float div(float n1, float n2) {return (n1 / n2);}
float sub(float n1, float n2) {return (n1 - n2);}

 int main()
{
	 float (*ptr_func[]) (float, float) = {sum, multi, div, sub};
         int select;
         float n1, n2;

         printf("Select operation : 0 for sum, 1 for multiply, 2 for division, 3 for subtraction\n");
         scanf("%d", &select);

         printf("Enter 2 numbers : \n");
         scanf("%f %f", &n1, &n2);

	 printf("The result of is : %.1f\n", ptr_func[select] (n1, n2));
	 return (0);
}
