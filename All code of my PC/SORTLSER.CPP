
		//search for sorted link list//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodet
{
 int info,next,avail;
};
struct nodet node[50],loc[50],avail[50];

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
 for(l=2;l<=j;l++)
 {
 if(k[l-1]==i)
 {
 j=j-1;
 printf("\nThe position is exit.");
 break;
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
 printf("\n\nEnter the item to be search: ");
 scanf("%d",&item);
 p=n;
 m=1;
 while(p!=-1)
 {

  if(item==node[p].info)
  {
  save=p;
  printf("\nThe item is found in %d position",save);
  break;
  }
  else
  {
  m++;
  p=k[m];
  }
 }
 if(save!=p)
 printf("\nThe item is not found in the list.");
 getch();
 return 0;
}