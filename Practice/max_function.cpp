#include<stdio.h>

int max(int a,int b);

int main()
{
	/*
	int num1,num2;
	printf("Enter number :");
	scanf("%d",&num1);
	
	printf("Enter number :");
	scanf("%d",&num2);
*/	
	int a=max(10,15);
	printf("Maximum is %d",a);
}

int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}