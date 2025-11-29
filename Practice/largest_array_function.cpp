#include<stdio.h>
int printLargest(int arr[],int a);

int main()
{
	int n;
	printf("Enter number :");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter element %d :",i);
		scanf("%d",&arr[i]);
	}
	
	printLargest(arr,n);
	
}

int printLargest(int arr[],int a)
{
	int largest=arr[0];
	for(int i=0;i<a;i++)
	{
		if(arr[i]>largest)
		{
		largest=arr[i];
	}
	}
	printf("largest is %d",largest);
	
}