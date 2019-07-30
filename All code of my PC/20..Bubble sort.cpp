#include<stdio.h>
int bubble()
{

int a[100],i,j,n,temp;
printf("How many data:");
scanf("%d",&n);
printf("Enter the values:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
for(j=1;j<=n-i;j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("After sorting the array is:");
for(i=1;i<=n;i++)
printf("%d ",a[i]);
return 0;
}


    int main()
    {
    bubble();
    return 0;
    }
