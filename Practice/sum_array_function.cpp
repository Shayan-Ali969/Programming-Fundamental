#include<Stdio.h>

int sumArray(int arr[],int a);

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
	int result=sumArray(arr,n);
	printf("Sum is %d",result);
	
}

int sumArray(int arr[],int a)
{
	int sum=0;
	for(int i=0;i<a;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}