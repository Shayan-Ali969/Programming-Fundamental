#include<stdio.h>
int main()
{
	float numerator,denominator;
	
	printf("Enter numerator :");
	scanf("%f",&numerator);
	
	printf("Enter denominator :");
	scanf("%f",&denominator);
	
	if(denominator==0)
	{
		printf("Error message");
	}
	
	else
	{
	printf("result is :%.2f",numerator/denominator);
    }
}