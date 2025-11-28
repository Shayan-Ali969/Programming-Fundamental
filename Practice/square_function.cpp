#include<stdio.h>

int printSquare(int a);

int main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);
	
	int b=printSquare(n);
	printf("Square of %d is %d",n,b);
}

int printSquare(int a)
{
	return a*a;
}