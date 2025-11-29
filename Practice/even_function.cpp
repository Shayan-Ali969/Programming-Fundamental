#include<stdio.h>
int printEven(int a);

int main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);
	
	printEven(n);
	
	
}

int printEven(int a)
{
	if(a%2==0) printf("%d is even",a);
	
	
}