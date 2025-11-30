#include<stdio.h>
void doubleArray(int arr[],int a);
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
	
	printf("\nArray elements are\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	doubleArray(arr,n);
	
}

void doubleArray(int arr[],int a)
{
	int doubleArr[a];
	for(int i=0;i<a;i++)
	{
	doubleArr[i]=arr[i]*2;
	
}
printf("\nNew array with doubled elements  is\n");
for(int i=0;i<a;i++)
{
	printf("%d ",doubleArr[i]);
}
	
	
}