#include<stdio.h>
#include<conio.h>
#define max 100
#define FALSE 0
#define TRUE 1

void quic_link(int a[],int l,int r);

void main()
{
clrscr();
int a[max],l,r,n;
printf("How many numbers:");
scanf("%d",&n);
printf("Enter the number:");

for(int i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
l=1;
r=n;

quic_link(a,l,r);

printf("\nAfter sorting:\n");
for(i=1;i<=n;i++)
printf("%d\t",a[i]);
getch();

}

void quic_link(int a[],int l,int r)
{
int i,j,temp,be,i_pass_j;

if(r>l)
{
 i=l;
 j=r;
 be=a[l];
 i_pass_j=FALSE;

while(!i_pass_j){

while((a[i]<=be)&&(i<=r))
{
  i++;
}

while((a[j]>=be)&&(j>l))
{
 j--;
}

if(j<i)
i_pass_j=TRUE;

else
{
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
}
}
temp=a[l];
a[l]=a[j];
a[j]=temp;

quic_link(a,l,j-1);
quic_link(a,i,r);
}
}




































































































