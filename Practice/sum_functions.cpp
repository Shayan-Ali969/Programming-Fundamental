#include<Stdio.h>

int add(int a,int b);

int main()
{
	int result=add(3,4);
	printf("Sum is %d",result);
}

int add(int a,int b)
{
	return a+b;
}