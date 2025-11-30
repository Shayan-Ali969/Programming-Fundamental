#include<stdio.h>
int reversed(int arr[],int a);
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
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	reversed(arr,n);
}

int reversed(int arr[],int a)
{
	printf("\nReversed array is \n");
	for(int i=a-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}