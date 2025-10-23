#include<stdio.h>
int main()
{
	float Fahrenheit,Celsius;
	
	printf("Enter Temperature in Celsius :");
	scanf("%f",&Celsius);
	
	Fahrenheit=Celsius*9/5+32;
	
	printf("Temperature in Fahrenheit is :%.2f",Fahrenheit);

    /*
	Observation:
	Input : 100 = output: 212.00
	Input : 0   = output: 32.00
	Input :-40  = output: -40.00
	*/	
	return 0;
	
}
