#include<stdio.h>
#include<conio.h>

void main()
{
//clrscr();
char a[40],b[40],c[40],n=0,l,i=0,j=0,k;
printf("\n\n\nEnter a infix expression:  -->>>");
while((a[j]=getchar())!='\n')
j++;
k=j;
a[k]=')';
b[0]='(';
i=0;
l=1;
do
{
if((a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='^')||a[i]=='(')
{
b[l]=a[i];
if((b[l-1]=='*'&&b[l]=='+')||(b[l-1]=='*'&&b[l]=='-')||(b[l-1]=='-'&&b[l]=='+')
  ||(b[l-1]=='+'&&b[l]=='-')||(b[l-1]=='-'&&b[l]=='-')||(b[l-1]=='+'&&b[l]=='+')
  ||(b[l-1]=='/'&&b[l]=='+')||(b[l-1]=='/'&&b[l]=='-')||(b[l-1]=='*'&&b[l]=='/')
  ||(b[l-1]=='/'&&b[l]=='*')||(b[l-1]=='*'&&b[l]=='*')||(b[l-1]=='/'&&b[l]=='/')
  ||(b[l-1]=='^'&&b[l]=='-')||(b[l-1]=='^'&&b[l]=='+')||(b[l-1]=='^'&&b[l]=='*')
  ||(b[l-1]=='^'&&b[l]=='/')||(b[l-1]=='^'&&b[l]=='^'))

{
l=l-1;
c[n]=b[l];
b[l]=b[l+1];
n++;
}
l++;
}
if(a[i]>='1'&&a[i]<='9')
{
c[n]=a[i];
n++;
}
if(a[i]==')')
{
l=l-1;
while(b[l]!='(')
{
c[n]=b[l];
n++;
l=l-1;
}
}
i++;
}while(i!=k+1);
printf("\n\n\nPostfix expression: -->>>");
for(j=0;j<n;j++)
printf("%c",c[j]);
getch();
}

