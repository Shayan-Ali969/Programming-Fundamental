#include<stdio.h>

int countNumber(int arr[],int a);
int main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter element %d :",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Array elements are \n");
		for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	countNumber(arr,n);
	
	
}

int countNumber(int arr[],int a)
{
	int b;
	printf("Enter any number :");
	scanf("%d",&b);
	int count=0;
	
		for(int i=0;i<a;i++)
	{
		if(b==arr[i])
		count ++;
		
	}
	
	printf("The number appear %d times ",count);
	
}