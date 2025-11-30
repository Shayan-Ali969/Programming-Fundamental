#include<stdio.h>
int checkNumber(int arr[],int a);

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
	checkNumber(arr,n);
}

int checkNumber(int arr[],int a)
{
	int m;
	int found=0;
	printf("Enter any number to check if it is in array :");
	scanf("%d",&m);
	for(int i=0;i<a;i++)
	{
		if(m==arr[i])
		{
			found=1;
			break;
		}
	}
		if(found==1)
		printf("%d is in array",m);
		else
		printf("%d is not in array",m);
		
	
	
}