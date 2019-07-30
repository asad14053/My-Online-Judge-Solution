
	//program for search an item in unsorted list//

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
 int k[500],n,j=2,l=1,m,o,p,i,x,y,z[500],temp,q,item,loc;
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
  scanf("%d",&node[i].next);
  i=node[i].next;
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
 printf("\n\nTotal no of element in a link list=%d\n\n",j-2);
 printf("\n\nEnter the item to be search: ");
 scanf("%d",&item);
 p=n;
 while(p!=-1)
 {
  if(item==node[p].info)
   {
    loc=p;
    break;
   }
  else
  p=node[p].next;
 }
 if(item==node[p].info)
 printf("\nThe item is found in %d position",loc);
 else
 printf("\nThe item is not found in the list.");
 getch();
 return 0;
}