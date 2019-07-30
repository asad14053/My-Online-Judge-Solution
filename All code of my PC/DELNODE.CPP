#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodet
{
 int info,next;
};
struct nodet node[500],loc[500];

void main()
{
 clrscr();
 int k[500],n,j=2,l=1,m,i,x,y,z[500],locp,loc1;
 printf("How many node-->>");
 scanf("%d",&x);
 printf("\nEnter the starting point-->>");
 scanf("%d",&n);
 i=n;
 k[1]=n;
 while(i!=-1)
 {
  if(i>x)
  {
   k[j-1]=-1;
   loc[k[j-2]].next=-1;
   printf("\nThere is no node found.");
   break;
  }
  printf("\nEnter the information value-->>");
  scanf("%d",&node[i].info);
  xx:
  printf("\nEnter the next pointer(Enter -1 to finish)-->>");
  scanf("%d",&loc[i].next);
  i=loc[i].next;
  k[j]=i;
  for(l=2;l<=j;l++)
  {
   if(k[l-1]==i)
   {
    loc[i].next=k[l];
    i=loc[i].next;
    printf("\nThe position is exit.");
    goto xx;
   }
  }
  j++;
 }
 m=1;
 l=n;
 printf("\n\nThe link list is:\n\n");
 while(l!=-1)
 {
  printf("%d-->",node[l].info);
  m++;
  l=k[m];
 }
 printf("%d",-1);
 l=1;
 for(i=1;i<=x;i++)
 if(node[i].info==0)
 {
  z[l]=i;
  l++;
 }
 printf("\n\nTotal no of element in a link list=%d\n\n",j-2);
 printf("Enter the node to delete = ");
 scanf("%d",&loc1);
 for(i=1;i<=x;i++)
 {
  if(loc1==k[i]&&loc1!=k[1])
  {
   locp=k[i-1];
   break;
  }
  if(loc1==k[1])
  {
   locp=0;
   break;
  }
 }

 if(locp==0)
 {
  l=k[2];
  m=1;
  while(l!=-1)
  {
   k[m]=k[m+1];
   m++;
   l=k[m];
  }
 }
 else
 {
  loc[locp].next=loc[loc1].next;

  m=1;
  l=2;
  for(i=n;i!=-1;i=loc[i].next)
  {
   if(loc[i].next==0)
   m++;
   else
   {
    k[l]=loc[i].next;
    l++;
    m++;
   }
  }
 }
 loc[loc1].next=0;
 m=1;
 l=k[1];
 printf("\n\nThe link list is:\n\n");
 while(l!=-1)
 {
  printf("%d-->",node[l].info);
  m++;
  l=k[m];
 }
 printf("%d",-1);
 getch();
}