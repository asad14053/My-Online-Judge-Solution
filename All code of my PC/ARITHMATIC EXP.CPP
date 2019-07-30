#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char str[50],stack[50];
	int i,len,top=0;
	printf("Enter an arithmatic expression:\n");
	gets(str);
	len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(str[i]=='['||str[i]=='{'||str[i]=='(')
			{
				top++;
				stack[top]=str[i];
			}
			else if(str[i]==']'||str[i]=='}'||str[i]==')')
				top--;
		}
		if(top==0)
			printf("The expression is valid.");
		else
			printf("The expression is not valid.");
	getch();
}