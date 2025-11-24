#include<stdio.h>
void swap(int a,int b);

int main()
{
	int x,y;
	printf("Enter x :");
	scanf("%d",&x);
	
	printf("Enter y :");
	scanf("%d",&y);
	
	printf(" before swaping a is %d and b is %d\n",x,y);
	
	swap(x,y);
	 
}

void swap(int a,int b)
{
	int n;
	n=a;
	a=b;
	b=n;
	
	printf("after swaping a is %d and b is %d\n",a,b);
}