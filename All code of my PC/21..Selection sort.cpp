#include<stdio.h>
int selection()
{

int a[100],i,j,n,min,temp;
printf("How many data:");
scanf("%d",&n);
printf("Enter the values:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n-1;i++)
{
    min=i;
for(j=i+1;j<n;j++)
    {
  if(a[min]>a[j])
  min=j;
    }

if(min!=i)
 {
temp=a[i];
a[i]=a[min];
a[min]=temp;
 }

}
printf("After sorting the array is:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
    int main()
    {
    selection();
    return 0;
    }
