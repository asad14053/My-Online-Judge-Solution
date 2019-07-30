#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
scanf("%d",&a);
char ch;
scanf("%c",&ch);
switch(ch)
{
case'+':
scanf("%d",&b);
a=a+b;
printf("%d",a);
break;

case'-':
scanf("%d",&b);
a=a-b;
printf("%d",a);
break;

case'*':
scanf("%d",&b);
a=a*b;
printf("%d",a);
break;

case'/':
scanf("%d",&b);
a=a*b;
printf("%d",a);
break;
}
getch();
}