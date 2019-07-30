
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodet
{
 int info,next,avail;
};
struct nodet node[50],loc[50],avail[50];

int lo;

void finda(int n,int item,int k[]);

int main(void)
{
 clrscr();
 int k[50],n,j=2,l=1,m,o,p,i,x,y,z[50],temp,q,item,save,a,lo1;
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
   printf("\nThere is no node found.");
   break;
  }
  printf("\nEnter the information value-->>");
  scanf("%d",&node[i].info);
  printf("\nEnter the next pointer(Enter -1 to finish)-->>");
  scanf("%d",&loc[i].next);
  i=loc[i].next;
  k[j]=i;
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
 m=1;
 for(l=n;l!=-1;l=k[m])
 {
  o=k[m+1];
  p=m+1;
  while(o!=-1)
  {
   if(node[l].info>node[o].info)
   {
    temp=node[l].info;
    node[l].info=node[o].info;
    node[o].info=temp;
   }
   p++;
   o=k[p];
  }
  m++;
 }
 m=1;
 l=n;
 printf("\n\nThe sorted link list is:\n\n");
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
 printf("\n\nTotal no of element in a link list=%d",j-2);
 printf("\n\nEnter the item to be insert: ");
 scanf("%d",&item);
 finda(n,item,k);
 if(j-2==x)
 {
  printf("\n\nOverflow-->>");
 }
 else
 {
  a=z[1];
  node[a].info=item;
  if(lo==0)
  {
   m=1;
   l=a;
  }
  else
  {
   m=1;
   loc[a].next=loc[lo].next;
   loc[lo].next=a;
   l=n;
   while(l!=-1)
   if(loc[l].next!=0)
   {
    m++;
    k[m]=loc[l].next;
    l=k[m];
   }
   l=k[1];
   m=2;
  }
  printf("\n\nThe Inserted link list is:\n");
  while(l!=-1)
  {
   printf("%d-->",node[l].info);
   l=k[m];
   m++;
  }
  printf("%d",-1);
 }
 getch();
 return 0;
}

void finda(int n,int item,int k[])
{
 int q,i=1,save;
 if(n==0||item<node[n].info)
 {
  lo=0;
  return;
 }
 save=n;
 q=loc[n].next;
 while(q!=-1)
 {
  if(item<node[q].info)
  {
   lo=save;
   return;
  }
  save=q;
  i++;
  q=k[i];
 }
}