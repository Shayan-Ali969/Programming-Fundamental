#include<Stdio.h>
int main()
{
	int arr[5];
	for(int i=0;i<=4;i++)
	{
		printf("Enter elements %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<=4;i++)
	{
	int n;
	n=arr[0];
	arr[0]=arr[4];
	arr[4]=n;
	
	printf("%d ",arr[i]);
	}
	
	
	
	
}