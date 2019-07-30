#include<stdio.h>
#include<conio.h>
void Hannoi(int n,char A,char B,char C);
void main()
{
clrscr();
int n;
char A,B,C;
printf("\nEnter the value of n:\n");
scanf("%d",&n);
printf("\nThe Tower of Hannoi is:");
Hannoi(n,'A','B','C');
getch();
}
void Hannoi(int n,char A,char B,char C)
{
if(n>0)
{
Hannoi(n-1,A,C,B);
printf("\nthe changes is: %c->%c ", A,C);
Hannoi(n-1,B,A,C);
}
}