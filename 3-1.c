#include<stdio.h>
int main()
{
	float weight;
	float value;
	printf("Are you worth you weight in rhodium?\n");
	printf("Let's check it out\n");
	printf("Please enter your weight: ");
	scanf("%f",&weight);
	value = 770 * weight * 14.5833;
	printf("You weight in rhodium is worth $%.2f.\n",value);
	printf("You are easily worth that!If rhodium prices drop,\n");	
	printf("eat more to maintain you value.\n");
	return 0;


}
