#include<stdio.h>

struct employee
{
	char employeename[100];
	int  employeeid;
	float employeesalary;
};

int main()
{
	struct employee emp[10];
	int i,LowestIndex=0;
	
	printf("Enter details of 10 employees\n");
	
	for(i=0;i<10;i++)
	{
		printf("\nEmployee %d\n",i+1);
		
		printf("Name : ");
		scanf("%s",emp[i].employeename);
		
		printf("ID : ");
		scanf("%d",&emp[i].employeeid);
		
		printf("Salary : ");
		scanf("%f",&emp[i].employeesalary);
	}
	for(i=1;i<10;i++)
	{
		if(emp[i].employeesalary<emp[LowestIndex].employeesalary)
		{
			LowestIndex=i;
		}
	}
	printf("\nEmploye with the Lowest salary\n");
	printf("Name : %s\n",emp[LowestIndex].employeename);
	printf("ID :%d\n",emp[LowestIndex].employeeid);
	printf("Salary :%f",emp[LowestIndex].employeesalary);
}