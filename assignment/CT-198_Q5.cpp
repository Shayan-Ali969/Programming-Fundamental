#include<stdio.h>
int main()
{
	float Celsius,Fahrenheit;
	
	printf("Enter Temperature in Celsius :");
	scanf("%f",&Celsius);
	
    Fahrenheit = Celsius*9/5+32;
    
    printf("Temperature in Fahrenheit is :%.2f\n",Fahrenheit);
    
    if(Celsius>=30)
    {
    printf("It's hot!Stay hydrated and wear light clothes.");
    }
    
    else if(Celsius>=20)
    {
    printf("Nice weather! Perfect for outdoor activities.");
    }
    
    else if(Celsius>=10)
    {
    printf("Cool weather. Wear a light jacket.");
    }
    
    else if(Celsius>=0)
    {
    printf("Cold! Wear warm clothes.");
    }
    
    else if(Celsius<0)
    {
    printf("Freezing! Stay indoors and bundle up.");
    }
    
    return 0;
}
