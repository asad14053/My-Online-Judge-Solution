

	 //insert in a location//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodet
{
  int info,next,avail;
};
struct nodet node[500],loc[500],avail[500];

int main(void)
{
 clrscr();
 int k[500],n,j=2,l=1,m,o,p,i,x,y,a=1,z[500],temp,q,lo,nxt[20];
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
 l=1;
 for(i=1;i<=x;i++)
 if(node[i].info==0)
 {
  z[l]=i;
  l++;
 }
 if(j-2==x)
 {
  printf("\n\nOverflow-->>");
 }
 else
 {
  printf("\n\nEnter a item to insert-->>");
  scanf("%d",&y);
  printf("\nEnter the location to insert:");
  scanf("%d",&lo);
  a=z[1];
  node[a].info=y;
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