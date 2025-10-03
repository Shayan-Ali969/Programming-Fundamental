#include<stdio.h>
int main()
{
	float kilowatts,watts;
	
	printf("Enter Electrical power in watts :");
	scanf("%f",&watts);
	
	kilowatts = watts /1000;
	
	printf("Electrical power in kilowatts is :%f",kilowatts);
}