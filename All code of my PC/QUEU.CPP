#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,m,n,a[50],rear=0,front=1,p;
printf("enter the size of queu=");
scanf("%d",&p);
while(1)
{
	printf("\n1 for insert:\n2 for delete:\n\n0 for exit=");
	scanf("%d",&n);

	if(n==1)
	{
	 printf("enter your value=");
	 scanf("%d",&m);
	 rear++;
	 if(rear==p+1)
	 {
	   printf("\nqueue is overflow.....");
	   getch();
	   break;
	 }
	 a[rear]=m;
	 i=front;
	 for(;i<=rear;i++)
	 printf("%d ",a[i]);
	}
	else if(n==2)
	{
	front++;
	if(front==p+1)
	{
	  printf("\nQueue is under flow");
	  getch();
	  break;
	}
	i=front;

	for(;i<=rear;i++)
	printf("%d ",a[i]);
	}
	else if(n==0)
	break;
}
for(;front<rear;front++)
{
printf("%d ",a[front]);
}
getch();
}