#include<Stdio.h>
int main()
{
	int matrix[2][2];
	printf("Enter matrix\n");
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			printf("Enter element a[%d][%d] :",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\n Entered matrix\n");
		for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			printf("%d  ",matrix[i][j]);
		}
		printf("\n");
	}
	
	int transpose[2][2];
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			transpose[j][i]=matrix[i][j];
		}
	}
	
	printf("\n Transpose is \n");
		for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			printf("%d  ",transpose[i][j]);
		}
		printf("\n");
	}
	
	
}