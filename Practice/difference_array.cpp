#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int sum_odd=0;//6
	int sum_even=0;//9
	for(int i=0;i<=4;i++)
	{
		if(i%2!=0)
		{
			sum_odd=sum_odd+arr[i];
		}
		else
		{
			sum_even=sum_even+arr[i];
		}
	}
	printf("sum of even elements is %d\n",sum_even);
		printf("sum of odd elements is %d\n",sum_odd);
		int diff;
		diff=sum_odd-sum_even;
		printf("difference is %d",diff);
}