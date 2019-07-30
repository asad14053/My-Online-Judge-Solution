#include<stdio.h>
int insertion()
{
    int a[100],i,j,n,s,temp;

printf("How many data:");
scanf("%d",&n);
printf("Enter the values:");
for(j=1;j<=n;j++)
    {
    scanf("%d",&a[j]);
 temp=a[j];
 s=j-1;
    while(s>=1&&temp<a[s])
        {
        a[s+1]=a[s];
        s--;
        }

 a[s+1]=temp;

    }

    printf("After sorting the array is:");
for(i=1;i<=n;i++)
printf("%d ",a[i]);

return 0;
}
int main()
{
insertion();
return 0;
}
