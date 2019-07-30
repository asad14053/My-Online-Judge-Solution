#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int i,j,k,n,len,stack[50],top;
	char str[50],ch='y';
	do
	{   top=0;
		if(ch=='y')
		{
		printf("Enter a prefix,infix or postfix expression:\n");
		gets(str);
		len=strlen(str);
		do
		{
			for(i=0;i<len;i++)
			{
				if(str[i]>='0' && str[i]<='9')
				{
					top++;
					stack[top]=str[i]-48;
				}
				else if(str[i]=='+')
				{
					n=stack[top];
					k=stack[--top];
					j=k+n;
					stack[top]=j;
				}
				else if(str[i]=='-')
				{
					n=stack[top];
					k=stack[--top];
					j=k-n;
					stack[top]=j;
				}
				else if(str[i]=='*')
				{
					n=stack[top];
					k=stack[--top];
					j=k*n;
					stack[top]=j;
				}
				else if(str[i]=='/')
				{
					n=stack[top];
					k=stack[--top];
					j=k/n;
					stack[top]=j;
				}
			}
		}while(top!=1);
	printf("\nThe postfix result is : %d",stack[top]);
	printf("\tCalculate another? y for yes and e for exit....");
		}
		else if(ch=='e')
			exit(0);
	}while((ch=getche())!='e'||ch!='y');
}