#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodet
{
 int info,next;
};
struct nodet node[500],loc[500];

int main(void)
{
 clrscr();
 int k[500],n,j=2,l=1,m,o,p,i,x,y,a=1,z[500],q;
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
  printf("\n\nTotal no of element in a link list=%d\n\n",j-2);
  if(j-2>=x)
  {
   printf("\n\nOverflow-->>");
  }
  else
  {
   printf("\n\nEnter a item to insert-->>");
   scanf("%d",&y);
   a=z[1];
   m=1;
   node[a].info=y;
   l=a;
   printf("\n\nThe Inserted link list is:\n");
   while(l!=-1)
   {
    printf("%d-->",node[l].info);
    l=k[m];
    m++;
   }
   printf("%d",-1);
   printf("\n\nAfter insert total no of element is=%d\n\n",j-1);
  }
  getch();
  return 0;
}