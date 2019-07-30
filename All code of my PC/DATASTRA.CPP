#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,i;
char x[10];
printf("how many number=");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
scanf("%s",x[i]);
}
for(i=0;i<=a;i++)
{
printf("%s",x[i]);
}
getch();
}