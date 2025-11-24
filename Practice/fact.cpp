#include<stdio.h>
int fact(int n);

int main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);
	
	int result= fact(n);
	printf("factorial of %d is %d",n,result);
	
}

int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}