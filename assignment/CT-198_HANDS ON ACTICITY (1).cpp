#include<stdio.h>
int main()
{
	float dosage,weight;
	printf("Enter patient weight : ");
	scanf("%f",&weight);
	
	dosage = weight * 0.8;
	
	printf("dosage is :%f", dosage);
}