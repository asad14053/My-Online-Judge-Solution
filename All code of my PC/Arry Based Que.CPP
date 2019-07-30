#include<stdio.h>
#include<conio.h>
void main()
{
  int que[50],i,j,m,rear=0,front=0,yes;
  clrscr();
  printf("maximum element:");
  scanf("%d",&m);
  printf("\nDo U want element:");
  scanf("%d",&i);
  while(i==1)
  {
     if(rear==0)
     {
	rear=front=1;
	scanf("%d",&que[rear]);
     }
     else if(rear<=m)
     {
	scanf("%d",&que[rear]);
     }
     if(rear<=m)
     {
	 printf("\ndo u continue:");
	 scanf("%d",&i);
	 if(i==1)
	 {rear=rear+1;}
     }
     if(rear>m)
     {
	 printf("\nOverflow:");
	 rear=rear-1;
	 break;
     }
  }
  printf("\nDo u want to delete:");
  scanf("%d",&j);
  while(j==1)
  {
	if(front<=rear)
	{
	  front=front+1;
	  printf("\nDo u want to delete:");
	  scanf("%d",&j);
	  //if(j==1)
	  //{front=front+1;}

	}
	else if(front>=rear)
	{
	  printf("\nUnderflow.");
	  front=0;
	  rear=0;
	  break;
	}
  }
 /* if(front)
  {
       printf("\nDo U want to Insert item:");
       scanf("%d",&yes);
       while(yes==1)
       {
       if(front>rear&&m==1)
       {
	 printf("\nOverflow");
	 break;
       }
       else if()  */
  if(rear==0)
  {
       printf("\nDo U want to Insert item:");
       scanf("%d",&yes);
       while(yes==1)
       {
	 if(front==0)
	 {
	    rear=front=1;
	    scanf("%d",&que[rear]);
	 }
	 else if(rear<=m)
	 {
	    scanf("%d",&que[rear]);
	 }
	 if(rear<=m)
	 {
	 printf("\ndo u continue:");
	 scanf("%d",&yes);
	 if(yes==1)
	   {rear=rear+1;}
	 }
	 if(rear>m)
	 {
	 printf("\nOverflow:");
	 rear=rear-1;
	 break;
	 }
     }
   }
  else if(rear==m&&front==m&&front>1)
  {
      printf("\nDo U want Insert:");
      scanf("%d",&yes);
      while(yes==1)
      {
      if(rear==m)
      {
	  rear=1;
	  scanf("%d",&que[rear]);
      }
      else if(rear<front)
      {
	  scanf("%d",&que[rear]);
      }
      if(rear<=front)
      {
	  printf("\ndo u continue:");
	  scanf("%d",&yes);
	  if(yes==1)
	  {rear=rear+1;}
       }
       if(rear>=front)
       {
	 printf("\nOverflow:");
	 rear=rear-1;
	 break;
       }
     }
  }
  else if(rear<m&&front>1)
  {
      printf("\nDo U want Insert:");
      scanf("%d",&yes);
      while(yes==1)
      {
      if(rear>=front&&rear<m&&front>1)
      {
	 rear=rear+1;
	 scanf("%d",&que[rear]);
      }
      else if(rear==m&&front>1)
      {
	 rear=1;
	 scanf("%d",&que[rear]);
      }
      else if(rear<front)
      {
	 rear=rear+1;
	 scanf("%d",&que[rear]);
      }
      if(rear<=front||rear<=m)
      {
	  printf("\ndo u continue:");
	  scanf("%d",&yes);
	  if(yes==1)
	  {

	  if(rear==m)
	     rear=1;
	  else
	     rear=rear+1;
	  }
       }
       if(front<m&&rear>front)
       {
	 printf("\nOverflow:");
	 rear=rear-1;
	 break;
       }
    }
  }
  else if(rear<m)
  {
  printf("\nDo U want Insert:");
      scanf("%d",&yes);
      while(yes==1)
      {
      if(rear<m)
      {
	scanf("%d",&que[rear]);
      }
      if(rear<=m)
      {
	  printf("\ndo u continue:");
	  scanf("%d",&yes);
	  if(yes==1)
	  {rear=rear+1;}
       }
       if(rear>m)
       {
	 printf("\nOverflow:");
	 rear=rear-1;
	 break;
       }
    }
  }
  printf("\nPresent the Queue Element: ");
  if(front==rear||rear>front)
  {
  for(i=front;i<=rear;i++)
      printf("%d ",que[i]);
  }
  if(front>rear)
  {
  for(i=front;i<=m;i++)
     printf("%d ",que[i]);
  for(j=1;j<=rear;j++)
     printf("%d ",que[j]);
  }
getch();
}