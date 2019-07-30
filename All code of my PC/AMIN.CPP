#include<stdio.h>
#include<conio.h>
void main()
{
int a[50][50],sum=0,m,n,i,j,mid;
scanf("%d",&m); /*  here  row= column  */
scanf("%d",&n);
printf("\nmatrix:");
for(i=1;i<=m;i++)
   for(j=1;j<=n;j++)
   {
    scanf("%d",&a[i][j]);
     }
for(i=1;i<=m;i++)
   for(j=1;j<=n;j++)
   {
    if(i==j)
     sum=a[i][j]+a[i][j];
     }
for(i=m;i>=1;i--)
   for(j=n;j>=1;j--)
   {
     if(i==j)
     sum+=a[i][j];
     }
if(m%2==1){
     mid=(m+1)/2;
     sum=sum-a[mid][mid];
     }
printf("summation:%d",sum);
getch() ;
}