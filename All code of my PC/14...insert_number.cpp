#include<stdio.h>
int main()
{
int i,j,n,a[100],value,loc,temp;
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the data:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);

scanf("%d%d",&loc,&value);

    temp=a[loc];
    a[loc]=value;
    j=a[loc+1];

    for(i=loc+1;i<=n+1;i++)
    {
    a[i]=temp;
    temp=j;
    j=a[i+1];
    }

for(i=1;i<=n+1;i++)
printf("%d ",a[i]);

return 0;
}
