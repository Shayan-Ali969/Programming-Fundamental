#include<stdio.h>
int factorial(int a);
int main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);
	factorial(n);
}
int factorial(int a)
{
	int factorial=1;
	for(int i=1;i<=a;i++)
	{
		factorial=factorial*i;
	}
	printf("Factorial is %d",factorial);
}