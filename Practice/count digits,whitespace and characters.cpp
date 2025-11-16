#include<stdio.h>
int main()
{
	int ch;
	printf("Enter a string:");

	
	int count_digits=0;
	int count_whitespace=0;
	int count_characters=0;
	
	while((ch=getchar()) !='\n')
	{
		if(ch>='0' && ch<='9')
		{
		count_digits++;
		}
		
		else if(ch==' '  || ch=='\t')
		{
		count_whitespace++;
		}
		
		else
		count_characters++;	
	}
	printf("The No.of digits are :%d\n",count_digits);
	printf("The No.of whitespace are :%d\n",count_whitespace);
	printf("The No.of characters are :%d\n",count_characters);
	
}