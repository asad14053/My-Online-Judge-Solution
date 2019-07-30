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
 int k[500],n,j=2,l=1,m,i,x,y,z[500],locp,loc1,item,ptr;
 printf("How many node-->>");
 scanf("%d",&x);
 printf("\nEnter the starting point-->>");
 scanf("%d",&n);
 ptr=n;
 k[1]=n;
 while(ptr!=-1)
 {
  if(ptr>x)
  {
   k[j-1]=-1;
   loc[k[j-2]].next=-1;
   printf("\nThere is no node found.");
   break;
  }
  printf("\nEnter the information value-->>");
  scanf("%d",&node[ptr].info);
  xx:
  printf("\nEnter the next pointer(Enter -1 to finish)-->>");
  scanf("%d",&loc[ptr].next);
  ptr=loc[ptr].next;
  k[j]=ptr;
  for(l=2;l<=j;l++)
  {
   if(k[l-1]==ptr)
   {
    loc[ptr].next=k[l];
    ptr=loc[ptr].next;
    printf("\nThe position is exit.");
    goto xx;
   }
  }
  j++;
 }
 m=1;
 ptr=n;
 printf("\n\nThe link list is:\n\n");
 while(ptr!=-1)
 {
  printf("%d-->",node[ptr].info);
  m++;
  ptr=k[m];
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
 printf("Enter the item to delete = ");
 scanf("%d",&item);
 m=1;
 for(i=n;i!=-1;i=k[m])
 {
  if(item==node[i].info)
  {
   loc1=k[m];
   break;
  }
  m++;
 }
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
 printf("\n\nAfter delete the link list is:\n\n");
 while(l!=-1)
 {
  printf("%d-->",node[l].info);
  m++;
  l=k[m];
 }
 printf("%d",-1);
 getch();
}