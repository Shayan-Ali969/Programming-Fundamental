#include<stdio.h>
void greet(char name[]);
int main()
{
	greet("SHAYAN");
}
void greet(char name[])
{
	printf("Hello %s",name);
}