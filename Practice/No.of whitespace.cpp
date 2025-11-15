#include<stdio.h>
int main() {
    char ch;
    int count = 0;
    printf("Enter a string: ");
    while((ch=getchar()) != '\n')
        if(ch==' ' || ch=='\t') 
		count++;
    printf("White spaces: %d\n", count);
}
