
#include<stdio.h>
#include<conio.h>
#include<CTYPE.H>

void inshep(int tree[],int n,int item);
void delhep(int tree[],int n);
int a, i,n,ptr,tree[100],tre[100],par,item,iteam;

int main (void)
 {
 clrscr();
 printf("How many elements in heapsort ");
 scanf("%d",&a);

 printf("Enter the elements  ");
 for(i=1;i<=a ;++i)
scanf("%d",&tree[i]);

 for(i=1;i<a;i++)
 {
 inshep(tree,i,tree[i+1]);
  }

 for(i=a;i>=1;--i)
 {
  delhep(tree,i);
  tre[i]=iteam;
 }

for(i=1;i<=a;++i)
   printf("\n%d",tre[i]);
   getch();
   return 0;
}
////////////////////************************
void inshep(int tree[],int n,int item)
 {
 n=n+1;
 ptr=n;
 do
 {
  par=ptr/2;

  if(item<=tree[par])
   {
    tree[ptr]=item;
   return;
   }

   tree[ptr]=tree[par];
   ptr=par;
   }
   while(ptr>1);


   tree[1]=item;
   return ;

   }

///////////************************************* /////////////

void delhep(int tree[],int n)
 {
 int last,left,right;
 iteam=tree[1];
 last=tree[n];
 //n=n-1;
 ptr=1;
 left=2;
 right=3;

 do
 {
   if(last>=tree[left]&&last>=tree[right])
   {
    tree[ptr]=last;
    tree[n]=0;
    return;
   }
  if(tree[right]<=tree[left])
  {
   tree[ptr]=tree[left];
   ptr=left;
   }
  else
  {
  tree[ptr]=tree[right];
   ptr=right;
  }
  left=2*ptr;

  right=left+1;
  }
   while(right<=n);

  if(left==n&&last<tree[left])
   ptr=left;
   tree[ptr]=last;


   return ;

   }


