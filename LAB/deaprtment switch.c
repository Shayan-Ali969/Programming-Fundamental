#include<stdio.h>
int main()
{int department;
int subdepartment;
printf("Enter your department:");
scanf("%d",&department);
switch(department){
	case 1:
		printf("Your chosen department is CS\n");
		printf("Enter subdepartment:");
		scanf("%d",&subdepartment);
		switch (subdepartment){
			case 1:
				printf("CSAI");
				break;
				case 2:
					printf("CSCS");
					break;
					case 3:
						printf("CSIT");
						break;
		}
		break;
    case 2:
    	printf("Your chosen department is Electrical Engineering");
    	break;
    	default:
    		printf("Invalid input");
}
return 0;
}