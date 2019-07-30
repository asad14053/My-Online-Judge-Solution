#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void show(int front,int rear,int n,int queue[])
{
	int i;
	printf("\nThe queue is:\n");
	if(front<=rear)
	{
		for(i=front;i<=rear;i++)
			printf("%d ",queue[i]);
	}
	else
	{
		for(i=front;i<=n;i++)
			printf("%d ",queue[i]);
		for(i=1;i<=rear;i++)
			printf("%d ",queue[i]);
	}
}
int num(int front,int rear,int n)
{
	if(front<rear)
		return(rear-front+1);
	else if(front>rear)
		return(n-front+1+rear);
	else if(front==rear)
		return(1);
	else
		return(0);
}
void main()
{
	clrscr();
	int n,queue[50],front=NULL,rear=NULL,item;
	printf("Enter the size of queue:\n");
	scanf("%d",&n);
	printf("\n1.Push\n2.Pop\n3.Exit\n");
	while(1)
	{
		switch(getche())
		{
			case '1':   if((front==1&&rear==n)||(front==rear+1))
							printf("\nThe queue is overflow.");
						else
						{
							printf("\nEnter item:");
							scanf("%d",&item);
							if(front==NULL)
								{
									front=1;
									rear=1;
								}
							else if(rear==n)
								rear=1;
							else
								rear=rear+1;
							queue[rear]=item;
							show(front,rear,n,queue);
							printf("\nThe element of the queue is %d\n",num(front,rear,n));
						}
						break;
			case '2':   if(front==NULL)
							printf("\nThe queue is underflow.");
						else
						{
							if(front==rear)
								front=rear=NULL;
							else if(front==n)
								front=1;
							else
								front=front+1;
							show(front,rear,n,queue);
							printf("\nThe element of the queue is %d\n",num(front,rear,n));
						}
						break;
			case '3':	exit(0);
			defult:		printf("Invalid selecton.");
						break;
		}
	}
}