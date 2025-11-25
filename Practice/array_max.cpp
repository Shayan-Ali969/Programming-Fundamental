#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int max=arr[0];
	for(int i=0;i<=4;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		
	}
	printf("max is %d",max);

}