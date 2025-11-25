#include<stdio.h>
int main()
{
	int arr[4]={4,6,8,10};
	int min=arr[0];
	for(int i=1;i<=3;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("minimum is %d",min);
}