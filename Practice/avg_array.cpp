#include<stdio.h>
int main()
{
	int marks[5]={90,100,70,80,100};
		int sum=0;
	for(int i=0;i<=4;i++)
	{
		sum = sum + marks[i];
	}
	printf("sum is %d\n",sum);
	
	int avg;
	avg=sum/5;
	printf("average is %d",avg);
}