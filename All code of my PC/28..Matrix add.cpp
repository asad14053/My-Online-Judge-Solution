#include<stdio.h>
int main()
{
int i,j,m,n,p,q,a[10][10],b[10][10],c[10][10];
printf("Enter the range of 1st row & column:");
scanf("%d %d",&m,&n);
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
printf("Enter the range of 2nd row & column:");
scanf("%d %d",&p,&q);
for(i=1;i<=p;i++)
for(j=1;j<=q;j++)
scanf("%d",&b[i][j]);
if(m==p&&n==q)
{
for(i=1;i<=m;i++)
for(j=1;j<=q;j++)
c[i][j]=a[i][j]+b[i][j];
printf("%d",c[i][j]);
printf("\n");
}
else printf("The sum is not possible");
return 0;
}
