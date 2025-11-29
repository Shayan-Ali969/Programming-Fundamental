#include<stdio.h>

int doubleleft(int a);

int main()
{
/*	int n;
	printf("Enter any number :");
	scanf("%d",&n);
*/	
	int m=doubleleft(6);
	printf("6 after multiplying by 2 is %d",m);
}

int doubleleft(int a)
{
	return a*2;
}