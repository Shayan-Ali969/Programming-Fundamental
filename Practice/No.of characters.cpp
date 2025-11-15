#include<stdio.h>
int main() {
    char ch;
    int count=0;
    printf("enter a string");
    scanf("%d",&ch);
    
    while((ch=getchar())!='\n')
    {
    	if (ch != ' ') {
        count++;
    }
}
	printf("the characters are :%d",count);
}
