#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int sum=0;
	
	for(int j=0;j<=4;j++)
	{
		printf("Enter elements %d\n",j+1);
		scanf("%d",&arr[j]);
	}
	for(int i=0;i<=4;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum is %d",sum);
}