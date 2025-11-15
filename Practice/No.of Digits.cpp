#include<stdio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
	int count;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("the no.of digits are:%d",count);
}